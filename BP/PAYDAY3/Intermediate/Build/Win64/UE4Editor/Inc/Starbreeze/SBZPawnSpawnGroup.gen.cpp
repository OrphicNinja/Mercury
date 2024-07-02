// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnGroup() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnGroup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnGroup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPawnSpawnGroup::execOnPawnSpawnDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSpawnDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void ASBZPawnSpawnGroup::StaticRegisterNativesASBZPawnSpawnGroup()
	{
		UClass* Class = ASBZPawnSpawnGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnSpawnDestroyed", &ASBZPawnSpawnGroup::execOnPawnSpawnDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics
	{
		struct SBZPawnSpawnGroup_eventOnPawnSpawnDestroyed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnSpawnGroup_eventOnPawnSpawnDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPawnSpawnGroup, nullptr, "OnPawnSpawnDestroyed", nullptr, nullptr, sizeof(SBZPawnSpawnGroup_eventOnPawnSpawnDestroyed_Parms), Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPawnSpawnGroup_NoRegister()
	{
		return ASBZPawnSpawnGroup::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPawnSpawnGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSpawnArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSpawnArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnSpawnArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRandomizeSpawnPoints_MetaData[];
#endif
		static void NewProp_bShouldRandomizeSpawnPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRandomizeSpawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnGroupRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPawnSpawnGroup_OnPawnSpawnDestroyed, "OnPawnSpawnDestroyed" }, // 3107076692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnSpawnGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnGroup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray_Inner = { "PawnSpawnArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray = { "PawnSpawnArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnGroup, PawnSpawnArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnGroup, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnGroup.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints_SetBit(void* Obj)
	{
		((ASBZPawnSpawnGroup*)Obj)->bShouldRandomizeSpawnPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints = { "bShouldRandomizeSpawnPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnSpawnGroup), &Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_SpawnGroupRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_SpawnGroupRoom = { "SpawnGroupRoom", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnGroup, SpawnGroupRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_SpawnGroupRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_SpawnGroupRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_PawnSpawnArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_bShouldRandomizeSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::NewProp_SpawnGroupRoom,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPawnSpawnGroup, ISBZRoomVolumeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPawnSpawnGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::ClassParams = {
		&ASBZPawnSpawnGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPawnSpawnGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPawnSpawnGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPawnSpawnGroup, 950055638);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPawnSpawnGroup>()
	{
		return ASBZPawnSpawnGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPawnSpawnGroup(Z_Construct_UClass_ASBZPawnSpawnGroup, &ASBZPawnSpawnGroup::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPawnSpawnGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPawnSpawnGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
