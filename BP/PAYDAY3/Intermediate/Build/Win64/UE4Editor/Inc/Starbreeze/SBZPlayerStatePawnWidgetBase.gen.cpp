// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStatePawnWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStatePawnWidgetBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerStatePawnWidgetBase::execIsWidgetPawnLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetPawnLocallyControlled();
		P_NATIVE_END;
	}
	void USBZPlayerStatePawnWidgetBase::StaticRegisterNativesUSBZPlayerStatePawnWidgetBase()
	{
		UClass* Class = USBZPlayerStatePawnWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsWidgetPawnLocallyControlled", &USBZPlayerStatePawnWidgetBase::execIsWidgetPawnLocallyControlled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics
	{
		struct SBZPlayerStatePawnWidgetBase_eventIsWidgetPawnLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerStatePawnWidgetBase_eventIsWidgetPawnLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerStatePawnWidgetBase_eventIsWidgetPawnLocallyControlled_Parms), &Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerStatePawnWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase, nullptr, "IsWidgetPawnLocallyControlled", nullptr, nullptr, sizeof(SBZPlayerStatePawnWidgetBase_eventIsWidgetPawnLocallyControlled_Parms), Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_NoRegister()
	{
		return USBZPlayerStatePawnWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerStatePawnWidgetBase_IsWidgetPawnLocallyControlled, "IsWidgetPawnLocallyControlled" }, // 897210103
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerStatePawnWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatePawnWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatePawnWidgetBase" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatePawnWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStatePawnWidgetBase, PlayerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::NewProp_PlayerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerStatePawnWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::ClassParams = {
		&USBZPlayerStatePawnWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerStatePawnWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerStatePawnWidgetBase, 3549341504);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerStatePawnWidgetBase>()
	{
		return USBZPlayerStatePawnWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerStatePawnWidgetBase(Z_Construct_UClass_USBZPlayerStatePawnWidgetBase, &USBZPlayerStatePawnWidgetBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerStatePawnWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerStatePawnWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
