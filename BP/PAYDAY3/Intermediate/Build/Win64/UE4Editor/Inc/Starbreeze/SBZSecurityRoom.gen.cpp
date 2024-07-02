// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityRoom() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityRoom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityRoom();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSecurityRoom::execOnCameraDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityRoom::execOnPlayableLevelInitialized)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayableLevelInitialized(Z_Param_World);
		P_NATIVE_END;
	}
	void ASBZSecurityRoom::StaticRegisterNativesASBZSecurityRoom()
	{
		UClass* Class = ASBZSecurityRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCameraDestroyed", &ASBZSecurityRoom::execOnCameraDestroyed },
			{ "OnPlayableLevelInitialized", &ASBZSecurityRoom::execOnPlayableLevelInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics
	{
		struct SBZSecurityRoom_eventOnCameraDestroyed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityRoom_eventOnCameraDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityRoom, nullptr, "OnCameraDestroyed", nullptr, nullptr, sizeof(SBZSecurityRoom_eventOnCameraDestroyed_Parms), Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics
	{
		struct SBZSecurityRoom_eventOnPlayableLevelInitialized_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityRoom_eventOnPlayableLevelInitialized_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityRoom, nullptr, "OnPlayableLevelInitialized", nullptr, nullptr, sizeof(SBZSecurityRoom_eventOnPlayableLevelInitialized_Parms), Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSecurityRoom_NoRegister()
	{
		return ASBZSecurityRoom::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSecurityRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeCameraDownVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadeCameraDownVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeCameraUpVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadeCameraUpVO;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecurityCameras_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecurityCameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardRoomSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardRoomSpawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSecurityRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPawnSpawnPredefined,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSecurityRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSecurityRoom_OnCameraDestroyed, "OnCameraDestroyed" }, // 2538841899
		{ &Z_Construct_UFunction_ASBZSecurityRoom_OnPlayableLevelInitialized, "OnPlayableLevelInitialized" }, // 3961294484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSecurityRoom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraDownVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraDownVO = { "ShadeCameraDownVO", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityRoom, ShadeCameraDownVO), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraDownVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraDownVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraUpVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraUpVO = { "ShadeCameraUpVO", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityRoom, ShadeCameraUpVO), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraUpVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraUpVO_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras_Inner = { "SecurityCameras", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSecurityCamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras = { "SecurityCameras", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityRoom, SecurityCameras), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_GuardRoomSpawner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityRoom" },
		{ "ModuleRelativePath", "Public/SBZSecurityRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_GuardRoomSpawner = { "GuardRoomSpawner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityRoom, GuardRoomSpawner), Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_GuardRoomSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_GuardRoomSpawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSecurityRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraDownVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_ShadeCameraUpVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_SecurityCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityRoom_Statics::NewProp_GuardRoomSpawner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZSecurityRoom_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityRoom, ISBZViewTargetCollectionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSecurityRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSecurityRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSecurityRoom_Statics::ClassParams = {
		&ASBZSecurityRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSecurityRoom_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityRoom_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSecurityRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSecurityRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSecurityRoom, 4171011618);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSecurityRoom>()
	{
		return ASBZSecurityRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSecurityRoom(Z_Construct_UClass_ASBZSecurityRoom, &ASBZSecurityRoom::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSecurityRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSecurityRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
