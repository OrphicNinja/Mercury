// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkReverbVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
// End Cross Module References
	void AAkReverbVolume::StaticRegisterNativesAAkReverbVolume()
	{
	}
	UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister()
	{
		return AAkReverbVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAkReverbVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkReverbVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAkReverbVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAkReverbVolume), &Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBusName), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, SendLevel), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, FadeRate), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent = { "LateReverbComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkReverbVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams = {
		&AAkReverbVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkReverbVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkReverbVolume, 2662481230);
	template<> AKAUDIO_API UClass* StaticClass<AAkReverbVolume>()
	{
		return AAkReverbVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkReverbVolume(Z_Construct_UClass_AAkReverbVolume, &AAkReverbVolume::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkReverbVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkReverbVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
