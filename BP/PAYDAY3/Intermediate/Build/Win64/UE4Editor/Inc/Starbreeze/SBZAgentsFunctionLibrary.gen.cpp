// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentsFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentsFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentsFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentsFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAgentsFunctionLibrary::execSetCrouched)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_SBZCharacter);
		P_GET_UBOOL(Z_Param_bCrouched);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAgentsFunctionLibrary::SetCrouched(Z_Param_SBZCharacter,Z_Param_bCrouched);
		P_NATIVE_END;
	}
	void USBZAgentsFunctionLibrary::StaticRegisterNativesUSBZAgentsFunctionLibrary()
	{
		UClass* Class = USBZAgentsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCrouched", &USBZAgentsFunctionLibrary::execSetCrouched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics
	{
		struct SBZAgentsFunctionLibrary_eventSetCrouched_Parms
		{
			ASBZCharacter* SBZCharacter;
			bool bCrouched;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZCharacter;
		static void NewProp_bCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::NewProp_SBZCharacter = { "SBZCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgentsFunctionLibrary_eventSetCrouched_Parms, SBZCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::NewProp_bCrouched_SetBit(void* Obj)
	{
		((SBZAgentsFunctionLibrary_eventSetCrouched_Parms*)Obj)->bCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::NewProp_bCrouched = { "bCrouched", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAgentsFunctionLibrary_eventSetCrouched_Parms), &Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::NewProp_bCrouched_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::NewProp_SBZCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::NewProp_bCrouched,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgentsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAgentsFunctionLibrary, nullptr, "SetCrouched", nullptr, nullptr, sizeof(SBZAgentsFunctionLibrary_eventSetCrouched_Parms), Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAgentsFunctionLibrary_NoRegister()
	{
		return USBZAgentsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAgentsFunctionLibrary_SetCrouched, "SetCrouched" }, // 2818555746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAgentsFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgentsFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::ClassParams = {
		&USBZAgentsFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgentsFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgentsFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgentsFunctionLibrary, 2118250895);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgentsFunctionLibrary>()
	{
		return USBZAgentsFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgentsFunctionLibrary(Z_Construct_UClass_USBZAgentsFunctionLibrary, &USBZAgentsFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgentsFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgentsFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
