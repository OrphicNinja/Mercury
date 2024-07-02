// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDozerFaceArmor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDozerFaceArmor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDozerFaceArmor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDozerFaceArmor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZDozerFaceArmor::StaticRegisterNativesUSBZDozerFaceArmor()
	{
	}
	UClass* Z_Construct_UClass_USBZDozerFaceArmor_NoRegister()
	{
		return USBZDozerFaceArmor::StaticClass();
	}
	struct Z_Construct_UClass_USBZDozerFaceArmor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armor_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Armor_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Armor_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Armor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorHardness_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmorHardness_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmorHardness_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ArmorHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCarryOnBreak_MetaData[];
#endif
		static void NewProp_bCarryOnBreak_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCarryOnBreak;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDozerFaceArmor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZDozerFaceArmor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_ValueProp = { "Armor", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_Key_KeyProp = { "Armor_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDozerFaceArmor" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDozerFaceArmor, Armor), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_ValueProp = { "ArmorHardness", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_Key_KeyProp = { "ArmorHardness_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDozerFaceArmor" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness = { "ArmorHardness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDozerFaceArmor, ArmorHardness), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDozerFaceArmor" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakEvent = { "BreakEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDozerFaceArmor, BreakEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakVFX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDozerFaceArmor" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakVFX = { "BreakVFX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDozerFaceArmor, BreakVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDozerFaceArmor" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakComment = { "BreakComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDozerFaceArmor, BreakComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDozerFaceArmor" },
		{ "ModuleRelativePath", "Public/SBZDozerFaceArmor.h" },
	};
#endif
	void Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak_SetBit(void* Obj)
	{
		((USBZDozerFaceArmor*)Obj)->bCarryOnBreak = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak = { "bCarryOnBreak", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDozerFaceArmor), &Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDozerFaceArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_ArmorHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_BreakComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDozerFaceArmor_Statics::NewProp_bCarryOnBreak,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDozerFaceArmor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDozerFaceArmor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDozerFaceArmor_Statics::ClassParams = {
		&USBZDozerFaceArmor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDozerFaceArmor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDozerFaceArmor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDozerFaceArmor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDozerFaceArmor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDozerFaceArmor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDozerFaceArmor, 3255330741);
	template<> STARBREEZE_API UClass* StaticClass<USBZDozerFaceArmor>()
	{
		return USBZDozerFaceArmor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDozerFaceArmor(Z_Construct_UClass_USBZDozerFaceArmor, &USBZDozerFaceArmor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDozerFaceArmor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDozerFaceArmor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
