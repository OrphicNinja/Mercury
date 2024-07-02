// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRandomizedRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRandomizedRoom() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRandomizedRoom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRandomizedRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASBZRandomizedRoom::StaticRegisterNativesASBZRandomizedRoom()
	{
	}
	UClass* Z_Construct_UClass_ASBZRandomizedRoom_NoRegister()
	{
		return ASBZRandomizedRoom::StaticClass();
	}
	struct Z_Construct_UClass_ASBZRandomizedRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomizedRoomPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomizedRoomPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedRoomSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectedRoomSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAfterSave_MetaData[];
#endif
		static void NewProp_ReloadAfterSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReloadAfterSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZRandomizedRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRandomizedRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRandomizedRoom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRandomizedRoom.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_LevelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomizedRoom" },
		{ "ModuleRelativePath", "Public/SBZRandomizedRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRandomizedRoom, LevelName), METADATA_PARAMS(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_RandomizedRoomPreview_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomizedRoom" },
		{ "ModuleRelativePath", "Public/SBZRandomizedRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_RandomizedRoomPreview = { "RandomizedRoomPreview", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRandomizedRoom, RandomizedRoomPreview), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_RandomizedRoomPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_RandomizedRoomPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ExpectedRoomSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomizedRoom" },
		{ "ModuleRelativePath", "Public/SBZRandomizedRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ExpectedRoomSize = { "ExpectedRoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRandomizedRoom, ExpectedRoomSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ExpectedRoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ExpectedRoomSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomizedRoom" },
		{ "ModuleRelativePath", "Public/SBZRandomizedRoom.h" },
	};
#endif
	void Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave_SetBit(void* Obj)
	{
		((ASBZRandomizedRoom*)Obj)->ReloadAfterSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave = { "ReloadAfterSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZRandomizedRoom), &Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors_Inner = { "PreviewActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomizedRoom" },
		{ "ModuleRelativePath", "Public/SBZRandomizedRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors = { "PreviewActors", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRandomizedRoom, PreviewActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZRandomizedRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_RandomizedRoomPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ExpectedRoomSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_ReloadAfterSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRandomizedRoom_Statics::NewProp_PreviewActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZRandomizedRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZRandomizedRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZRandomizedRoom_Statics::ClassParams = {
		&ASBZRandomizedRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZRandomizedRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZRandomizedRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRandomizedRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZRandomizedRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZRandomizedRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZRandomizedRoom, 2535881968);
	template<> STARBREEZE_API UClass* StaticClass<ASBZRandomizedRoom>()
	{
		return ASBZRandomizedRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZRandomizedRoom(Z_Construct_UClass_ASBZRandomizedRoom, &ASBZRandomizedRoom::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZRandomizedRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZRandomizedRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
