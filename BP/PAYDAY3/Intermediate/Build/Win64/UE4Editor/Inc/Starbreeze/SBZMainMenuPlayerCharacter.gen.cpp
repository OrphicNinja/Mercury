// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPlayerCharacter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularCharacterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMainMenuPlayerCharacter::execDestroyEquippable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyEquippable();
		P_NATIVE_END;
	}
	void ASBZMainMenuPlayerCharacter::StaticRegisterNativesASBZMainMenuPlayerCharacter()
	{
		UClass* Class = ASBZMainMenuPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyEquippable", &ASBZMainMenuPlayerCharacter::execDestroyEquippable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMainMenuPlayerCharacter, nullptr, "DestroyEquippable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister()
	{
		return ASBZMainMenuPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfigEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfigEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskDataEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskDataEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncEquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsyncEquippableConfig;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedWeaponObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedWeaponObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedWeaponObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedLoadoutObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLoadoutObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedLoadoutObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMainMenuPlayerCharacter_DestroyEquippable, "DestroyEquippable" }, // 2576822077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPlayerCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, Mesh), Z_Construct_UClass_USBZModularCharacterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Equippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Equippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskEquipped = { "MaskEquipped", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, MaskEquipped), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskConfigEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskConfigEquipped = { "MaskConfigEquipped", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, MaskConfigEquipped), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskConfigEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskConfigEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskDataEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskDataEquipped = { "MaskDataEquipped", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, MaskDataEquipped), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskDataEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskDataEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CharacterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CharacterComponent = { "CharacterComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CharacterComponent), Z_Construct_UClass_USBZCharacterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CharacterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CharacterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_PlayerCharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_PlayerCharacterData = { "PlayerCharacterData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, PlayerCharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_PlayerCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_PlayerCharacterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_AsyncEquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_AsyncEquippableConfig = { "AsyncEquippableConfig", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, AsyncEquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_AsyncEquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_AsyncEquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects_Inner = { "CachedWeaponObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects = { "CachedWeaponObjects", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CachedWeaponObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects_Inner = { "CachedLoadoutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects = { "CachedLoadoutObjects", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CachedLoadoutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPlayerCharacter" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadout = { "CachedLoadout", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CachedLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_Equippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskConfigEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_MaskDataEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CharacterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_PlayerCharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_AsyncEquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedWeaponObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadoutObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::NewProp_CachedLoadout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMainMenuPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::ClassParams = {
		&ASBZMainMenuPlayerCharacter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMainMenuPlayerCharacter, 248337166);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMainMenuPlayerCharacter>()
	{
		return ASBZMainMenuPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMainMenuPlayerCharacter(Z_Construct_UClass_ASBZMainMenuPlayerCharacter, &ASBZMainMenuPlayerCharacter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMainMenuPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMainMenuPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
