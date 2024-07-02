// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZECMJammer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZECMJammer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZECMJammer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZECMJammer();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableToolBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASBZECMJammer_OnJammerEffectEnded = FName(TEXT("OnJammerEffectEnded"));
	void ASBZECMJammer::OnJammerEffectEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZECMJammer_OnJammerEffectEnded),NULL);
	}
	void ASBZECMJammer::StaticRegisterNativesASBZECMJammer()
	{
	}
	struct Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZECMJammer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZECMJammer, nullptr, "OnJammerEffectEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZECMJammer_NoRegister()
	{
		return ASBZECMJammer::StaticClass();
	}
	struct Z_Construct_UClass_ASBZECMJammer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZECMJammer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZECMJammer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZECMJammer_OnJammerEffectEnded, "OnJammerEffectEnded" }, // 4171979804
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZECMJammer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZECMJammer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZECMJammer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZECMJammer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZECMJammer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZECMJammer, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZECMJammer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZECMJammer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZECMJammer, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZECMJammer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZECMJammer_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZECMJammer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZECMJammer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZECMJammer_Statics::ClassParams = {
		&ASBZECMJammer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZECMJammer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZECMJammer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZECMJammer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZECMJammer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZECMJammer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZECMJammer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZECMJammer, 2520417802);
	template<> STARBREEZE_API UClass* StaticClass<ASBZECMJammer>()
	{
		return ASBZECMJammer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZECMJammer(Z_Construct_UClass_ASBZECMJammer, &ASBZECMJammer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZECMJammer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZECMJammer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
