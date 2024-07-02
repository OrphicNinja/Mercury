// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnClosetReactorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnClosetReactorInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnClosetReactorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnClosetReactorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ISBZSpawnClosetReactorInterface::execReactToCloset)
	{
		P_GET_UBOOL(Z_Param_bActorsInCloset);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReactToCloset_Implementation(Z_Param_bActorsInCloset,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	void ISBZSpawnClosetReactorInterface::ReactToCloset(bool bActorsInCloset, bool bDoCosmetics)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReactToCloset instead.");
	}
	void USBZSpawnClosetReactorInterface::StaticRegisterNativesUSBZSpawnClosetReactorInterface()
	{
		UClass* Class = USBZSpawnClosetReactorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReactToCloset", &ISBZSpawnClosetReactorInterface::execReactToCloset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics
	{
		static void NewProp_bActorsInCloset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorsInCloset;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bActorsInCloset_SetBit(void* Obj)
	{
		((SBZSpawnClosetReactorInterface_eventReactToCloset_Parms*)Obj)->bActorsInCloset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bActorsInCloset = { "bActorsInCloset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSpawnClosetReactorInterface_eventReactToCloset_Parms), &Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bActorsInCloset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZSpawnClosetReactorInterface_eventReactToCloset_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSpawnClosetReactorInterface_eventReactToCloset_Parms), &Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bActorsInCloset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnClosetReactorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnClosetReactorInterface, nullptr, "ReactToCloset", nullptr, nullptr, sizeof(SBZSpawnClosetReactorInterface_eventReactToCloset_Parms), Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSpawnClosetReactorInterface_NoRegister()
	{
		return USBZSpawnClosetReactorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSpawnClosetReactorInterface_ReactToCloset, "ReactToCloset" }, // 448402576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnClosetReactorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZSpawnClosetReactorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::ClassParams = {
		&USBZSpawnClosetReactorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnClosetReactorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnClosetReactorInterface, 2210643177);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnClosetReactorInterface>()
	{
		return USBZSpawnClosetReactorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnClosetReactorInterface(Z_Construct_UClass_USBZSpawnClosetReactorInterface, &USBZSpawnClosetReactorInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnClosetReactorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnClosetReactorInterface);
	static FName NAME_USBZSpawnClosetReactorInterface_ReactToCloset = FName(TEXT("ReactToCloset"));
	void ISBZSpawnClosetReactorInterface::Execute_ReactToCloset(UObject* O, bool bActorsInCloset, bool bDoCosmetics)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZSpawnClosetReactorInterface::StaticClass()));
		SBZSpawnClosetReactorInterface_eventReactToCloset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZSpawnClosetReactorInterface_ReactToCloset);
		if (Func)
		{
			Parms.bActorsInCloset=bActorsInCloset;
			Parms.bDoCosmetics=bDoCosmetics;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZSpawnClosetReactorInterface*)(O->GetNativeInterfaceAddress(USBZSpawnClosetReactorInterface::StaticClass())))
		{
			I->ReactToCloset_Implementation(bActorsInCloset,bDoCosmetics);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
