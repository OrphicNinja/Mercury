// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPoolableActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPoolableActorInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPoolableActorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPoolableActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ISBZPoolableActorInterface::execOnPooled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPooled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZPoolableActorInterface::execOnUnpooled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnpooled_Implementation();
		P_NATIVE_END;
	}
	void ISBZPoolableActorInterface::OnPooled()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPooled instead.");
	}
	void ISBZPoolableActorInterface::OnUnpooled()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUnpooled instead.");
	}
	void USBZPoolableActorInterface::StaticRegisterNativesUSBZPoolableActorInterface()
	{
		UClass* Class = USBZPoolableActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPooled", &ISBZPoolableActorInterface::execOnPooled },
			{ "OnUnpooled", &ISBZPoolableActorInterface::execOnUnpooled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPoolableActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPoolableActorInterface, nullptr, "OnPooled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPoolableActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPoolableActorInterface, nullptr, "OnUnpooled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPoolableActorInterface_NoRegister()
	{
		return USBZPoolableActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZPoolableActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPoolableActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPoolableActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPoolableActorInterface_OnPooled, "OnPooled" }, // 1527173836
		{ &Z_Construct_UFunction_USBZPoolableActorInterface_OnUnpooled, "OnUnpooled" }, // 1897697635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPoolableActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPoolableActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPoolableActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZPoolableActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPoolableActorInterface_Statics::ClassParams = {
		&USBZPoolableActorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPoolableActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPoolableActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPoolableActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPoolableActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPoolableActorInterface, 1982408202);
	template<> STARBREEZE_API UClass* StaticClass<USBZPoolableActorInterface>()
	{
		return USBZPoolableActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPoolableActorInterface(Z_Construct_UClass_USBZPoolableActorInterface, &USBZPoolableActorInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPoolableActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPoolableActorInterface);
	static FName NAME_USBZPoolableActorInterface_OnPooled = FName(TEXT("OnPooled"));
	void ISBZPoolableActorInterface::Execute_OnPooled(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZPoolableActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZPoolableActorInterface_OnPooled);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISBZPoolableActorInterface*)(O->GetNativeInterfaceAddress(USBZPoolableActorInterface::StaticClass())))
		{
			I->OnPooled_Implementation();
		}
	}
	static FName NAME_USBZPoolableActorInterface_OnUnpooled = FName(TEXT("OnUnpooled"));
	void ISBZPoolableActorInterface::Execute_OnUnpooled(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZPoolableActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZPoolableActorInterface_OnUnpooled);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISBZPoolableActorInterface*)(O->GetNativeInterfaceAddress(USBZPoolableActorInterface::StaticClass())))
		{
			I->OnUnpooled_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
