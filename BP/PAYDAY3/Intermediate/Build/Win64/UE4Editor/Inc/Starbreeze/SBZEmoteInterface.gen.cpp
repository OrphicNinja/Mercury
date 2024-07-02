// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEmoteInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEmoteInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmoteInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmoteInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ISBZEmoteInterface::execStartEmote)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_EmoteText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEmote(Z_Param_Out_EmoteText);
		P_NATIVE_END;
	}
	void USBZEmoteInterface::StaticRegisterNativesUSBZEmoteInterface()
	{
		UClass* Class = USBZEmoteInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartEmote", &ISBZEmoteInterface::execStartEmote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics
	{
		struct SBZEmoteInterface_eventStartEmote_Parms
		{
			FText EmoteText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmoteText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EmoteText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::NewProp_EmoteText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::NewProp_EmoteText = { "EmoteText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEmoteInterface_eventStartEmote_Parms, EmoteText), METADATA_PARAMS(Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::NewProp_EmoteText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::NewProp_EmoteText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::NewProp_EmoteText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEmoteInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEmoteInterface, nullptr, "StartEmote", nullptr, nullptr, sizeof(SBZEmoteInterface_eventStartEmote_Parms), Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEmoteInterface_StartEmote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEmoteInterface_StartEmote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZEmoteInterface_NoRegister()
	{
		return USBZEmoteInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZEmoteInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEmoteInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZEmoteInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZEmoteInterface_StartEmote, "StartEmote" }, // 2111963462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmoteInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SBZEmoteInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEmoteInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZEmoteInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEmoteInterface_Statics::ClassParams = {
		&USBZEmoteInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEmoteInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEmoteInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEmoteInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEmoteInterface, 2250451540);
	template<> STARBREEZE_API UClass* StaticClass<USBZEmoteInterface>()
	{
		return USBZEmoteInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEmoteInterface(Z_Construct_UClass_USBZEmoteInterface, &USBZEmoteInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEmoteInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEmoteInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
