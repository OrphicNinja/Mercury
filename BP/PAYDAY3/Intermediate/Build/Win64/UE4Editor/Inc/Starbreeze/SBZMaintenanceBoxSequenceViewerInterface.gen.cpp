// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaintenanceBoxSequenceViewerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaintenanceBoxSequenceViewerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ISBZMaintenanceBoxSequenceViewerInterface::execUpdateSequenceHint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_GET_TARRAY_REF(int32,Z_Param_Out_CorrectSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSequenceHint_Implementation(Z_Param_SequenceIndex,Z_Param_Out_CorrectSequence);
		P_NATIVE_END;
	}
	void ISBZMaintenanceBoxSequenceViewerInterface::UpdateSequenceHint(const int32 SequenceIndex, TArray<int32> const& CorrectSequence)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateSequenceHint instead.");
	}
	void USBZMaintenanceBoxSequenceViewerInterface::StaticRegisterNativesUSBZMaintenanceBoxSequenceViewerInterface()
	{
		UClass* Class = USBZMaintenanceBoxSequenceViewerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSequenceHint", &ISBZMaintenanceBoxSequenceViewerInterface::execUpdateSequenceHint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CorrectSequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorrectSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CorrectSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_SequenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaintenanceBoxSequenceViewerInterface_eventUpdateSequenceHint_Parms, SequenceIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_SequenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_SequenceIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence_Inner = { "CorrectSequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence = { "CorrectSequence", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaintenanceBoxSequenceViewerInterface_eventUpdateSequenceHint_Parms, CorrectSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::NewProp_CorrectSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaintenanceBoxSequenceViewerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface, nullptr, "UpdateSequenceHint", nullptr, nullptr, sizeof(SBZMaintenanceBoxSequenceViewerInterface_eventUpdateSequenceHint_Parms), Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_NoRegister()
	{
		return USBZMaintenanceBoxSequenceViewerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint, "UpdateSequenceHint" }, // 1623404135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaintenanceBoxSequenceViewerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZMaintenanceBoxSequenceViewerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::ClassParams = {
		&USBZMaintenanceBoxSequenceViewerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaintenanceBoxSequenceViewerInterface, 3180562275);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaintenanceBoxSequenceViewerInterface>()
	{
		return USBZMaintenanceBoxSequenceViewerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaintenanceBoxSequenceViewerInterface(Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface, &USBZMaintenanceBoxSequenceViewerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaintenanceBoxSequenceViewerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaintenanceBoxSequenceViewerInterface);
	static FName NAME_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint = FName(TEXT("UpdateSequenceHint"));
	void ISBZMaintenanceBoxSequenceViewerInterface::Execute_UpdateSequenceHint(UObject* O, const int32 SequenceIndex, TArray<int32> const& CorrectSequence)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZMaintenanceBoxSequenceViewerInterface::StaticClass()));
		SBZMaintenanceBoxSequenceViewerInterface_eventUpdateSequenceHint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZMaintenanceBoxSequenceViewerInterface_UpdateSequenceHint);
		if (Func)
		{
			Parms.SequenceIndex=SequenceIndex;
			Parms.CorrectSequence=CorrectSequence;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZMaintenanceBoxSequenceViewerInterface*)(O->GetNativeInterfaceAddress(USBZMaintenanceBoxSequenceViewerInterface::StaticClass())))
		{
			I->UpdateSequenceHint_Implementation(SequenceIndex,CorrectSequence);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
