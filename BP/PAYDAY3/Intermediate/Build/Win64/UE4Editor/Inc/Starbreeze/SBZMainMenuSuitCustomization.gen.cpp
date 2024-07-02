// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuSuitCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuSuitCustomization() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitCustomization_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuSuitCustomization();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSuitPart();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuSuitCustomization::execGetCosmeticItemInSlot)
	{
		P_GET_ENUM(ESBZSuitPart,Z_Param_SuitPart);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_InCosmeticPartSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USBZModularPartDataAsset**)Z_Param__Result=P_THIS->GetCosmeticItemInSlot(ESBZSuitPart(Z_Param_SuitPart),Z_Param_InCosmeticPartSlot);
		P_NATIVE_END;
	}
	void USBZMainMenuSuitCustomization::StaticRegisterNativesUSBZMainMenuSuitCustomization()
	{
		UClass* Class = USBZMainMenuSuitCustomization::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCosmeticItemInSlot", &USBZMainMenuSuitCustomization::execGetCosmeticItemInSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics
	{
		struct SBZMainMenuSuitCustomization_eventGetCosmeticItemInSlot_Parms
		{
			ESBZSuitPart SuitPart;
			const USBZCosmeticsPartSlot* InCosmeticPartSlot;
			const USBZModularPartDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuitPart_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuitPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticPartSlot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_SuitPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_SuitPart = { "SuitPart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitCustomization_eventGetCosmeticItemInSlot_Parms, SuitPart), Z_Construct_UEnum_Starbreeze_ESBZSuitPart, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_InCosmeticPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_InCosmeticPartSlot = { "InCosmeticPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitCustomization_eventGetCosmeticItemInSlot_Parms, InCosmeticPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_InCosmeticPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_InCosmeticPartSlot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuSuitCustomization_eventGetCosmeticItemInSlot_Parms, ReturnValue), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_SuitPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_SuitPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_InCosmeticPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuSuitCustomization, nullptr, "GetCosmeticItemInSlot", nullptr, nullptr, sizeof(SBZMainMenuSuitCustomization_eventGetCosmeticItemInSlot_Parms), Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuSuitCustomization_NoRegister()
	{
		return USBZMainMenuSuitCustomization::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuitSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuSuitCustomization_GetCosmeticItemInSlot, "GetCosmeticItemInSlot" }, // 481865725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuSuitCustomization.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCustomization" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlotIndex = { "SuitSlotIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCustomization, SuitSlotIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuSuitCustomization" },
		{ "ModuleRelativePath", "Public/SBZMainMenuSuitCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlot = { "SuitSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuSuitCustomization, SuitSlot), Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::NewProp_SuitSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuSuitCustomization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::ClassParams = {
		&USBZMainMenuSuitCustomization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuSuitCustomization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuSuitCustomization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuSuitCustomization, 2651300888);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuSuitCustomization>()
	{
		return USBZMainMenuSuitCustomization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuSuitCustomization(Z_Construct_UClass_USBZMainMenuSuitCustomization, &USBZMainMenuSuitCustomization::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuSuitCustomization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuSuitCustomization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
