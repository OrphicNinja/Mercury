// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_DozerTaunt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_DozerTaunt() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_DozerTaunt_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_DozerTaunt();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZBTTask_DozerTaunt::StaticRegisterNativesUSBZBTTask_DozerTaunt()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_DozerTaunt_NoRegister()
	{
		return USBZBTTask_DozerTaunt::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TauntComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TauntComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_DozerTaunt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_DozerTaunt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::NewProp_TauntComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_DozerTaunt" },
		{ "ModuleRelativePath", "Public/SBZBTTask_DozerTaunt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::NewProp_TauntComment = { "TauntComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_DozerTaunt, TauntComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::NewProp_TauntComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::NewProp_TauntComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::NewProp_TauntComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_DozerTaunt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::ClassParams = {
		&USBZBTTask_DozerTaunt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_DozerTaunt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_DozerTaunt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_DozerTaunt, 1727224119);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_DozerTaunt>()
	{
		return USBZBTTask_DozerTaunt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_DozerTaunt(Z_Construct_UClass_USBZBTTask_DozerTaunt, &USBZBTTask_DozerTaunt::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_DozerTaunt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_DozerTaunt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
