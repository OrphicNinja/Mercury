// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_Focus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_Focus() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Focus_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Focus();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFocusPriority();
// End Cross Module References
	void USBZBTDecorator_Focus::StaticRegisterNativesUSBZBTDecorator_Focus()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_Focus_NoRegister()
	{
		return USBZBTDecorator_Focus::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_Focus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLockFocus_MetaData[];
#endif
		static void NewProp_bShouldLockFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLockFocus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusPriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FocusPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_Focus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Focus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_Focus.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Focus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Focus" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Focus.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus_SetBit(void* Obj)
	{
		((USBZBTDecorator_Focus*)Obj)->bShouldLockFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus = { "bShouldLockFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_Focus), &Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Focus" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Focus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority = { "FocusPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_Focus, FocusPriority), Z_Construct_UEnum_Starbreeze_ESBZFocusPriority, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_Focus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_bShouldLockFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Focus_Statics::NewProp_FocusPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_Focus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_Focus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_Focus_Statics::ClassParams = {
		&USBZBTDecorator_Focus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_Focus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Focus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_Focus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_Focus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_Focus, 782103965);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_Focus>()
	{
		return USBZBTDecorator_Focus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_Focus(Z_Construct_UClass_USBZBTDecorator_Focus, &USBZBTDecorator_Focus::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_Focus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_Focus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
