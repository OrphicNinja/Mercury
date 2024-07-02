// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZViewTargetCollectionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZViewTargetCollectionInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZViewTargetCollectionInterface::execGetCurrentViewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentViewTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZViewTargetCollectionInterface::execGetViewTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InViewTargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetViewTarget_Implementation(Z_Param_InViewTargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZViewTargetCollectionInterface::execGetViewTargetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetViewTargetCount_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZViewTargetCollectionInterface::execGetViewTargetIndex)
	{
		P_GET_OBJECT(AActor,Z_Param_ViewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetViewTargetIndex_Implementation(Z_Param_ViewTarget);
		P_NATIVE_END;
	}
	AActor* ISBZViewTargetCollectionInterface::GetCurrentViewTarget() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentViewTarget instead.");
		SBZViewTargetCollectionInterface_eventGetCurrentViewTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* ISBZViewTargetCollectionInterface::GetViewTarget(int32 InViewTargetIndex) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetViewTarget instead.");
		SBZViewTargetCollectionInterface_eventGetViewTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ISBZViewTargetCollectionInterface::GetViewTargetCount() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetViewTargetCount instead.");
		SBZViewTargetCollectionInterface_eventGetViewTargetCount_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ISBZViewTargetCollectionInterface::GetViewTargetIndex(AActor* ViewTarget) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetViewTargetIndex instead.");
		SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms Parms;
		return Parms.ReturnValue;
	}
	void USBZViewTargetCollectionInterface::StaticRegisterNativesUSBZViewTargetCollectionInterface()
	{
		UClass* Class = USBZViewTargetCollectionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentViewTarget", &ISBZViewTargetCollectionInterface::execGetCurrentViewTarget },
			{ "GetViewTarget", &ISBZViewTargetCollectionInterface::execGetViewTarget },
			{ "GetViewTargetCount", &ISBZViewTargetCollectionInterface::execGetViewTargetCount },
			{ "GetViewTargetIndex", &ISBZViewTargetCollectionInterface::execGetViewTargetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInterface_eventGetCurrentViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetCollectionInterface, nullptr, "GetCurrentViewTarget", nullptr, nullptr, sizeof(SBZViewTargetCollectionInterface_eventGetCurrentViewTarget_Parms), Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InViewTargetIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::NewProp_InViewTargetIndex = { "InViewTargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInterface_eventGetViewTarget_Parms, InViewTargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInterface_eventGetViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::NewProp_InViewTargetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetCollectionInterface, nullptr, "GetViewTarget", nullptr, nullptr, sizeof(SBZViewTargetCollectionInterface_eventGetViewTarget_Parms), Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInterface_eventGetViewTargetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetCollectionInterface, nullptr, "GetViewTargetCount", nullptr, nullptr, sizeof(SBZViewTargetCollectionInterface_eventGetViewTargetCount_Parms), Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::NewProp_ViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetCollectionInterface, nullptr, "GetViewTargetIndex", nullptr, nullptr, sizeof(SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms), Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister()
	{
		return USBZViewTargetCollectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetCurrentViewTarget, "GetCurrentViewTarget" }, // 265151250
		{ &Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTarget, "GetViewTarget" }, // 348244941
		{ &Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetCount, "GetViewTargetCount" }, // 3050447899
		{ &Z_Construct_UFunction_USBZViewTargetCollectionInterface_GetViewTargetIndex, "GetViewTargetIndex" }, // 774264966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZViewTargetCollectionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::ClassParams = {
		&USBZViewTargetCollectionInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZViewTargetCollectionInterface, 712429832);
	template<> STARBREEZE_API UClass* StaticClass<USBZViewTargetCollectionInterface>()
	{
		return USBZViewTargetCollectionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZViewTargetCollectionInterface(Z_Construct_UClass_USBZViewTargetCollectionInterface, &USBZViewTargetCollectionInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZViewTargetCollectionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZViewTargetCollectionInterface);
	static FName NAME_USBZViewTargetCollectionInterface_GetCurrentViewTarget = FName(TEXT("GetCurrentViewTarget"));
	AActor* ISBZViewTargetCollectionInterface::Execute_GetCurrentViewTarget(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZViewTargetCollectionInterface::StaticClass()));
		SBZViewTargetCollectionInterface_eventGetCurrentViewTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZViewTargetCollectionInterface_GetCurrentViewTarget);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZViewTargetCollectionInterface*)(O->GetNativeInterfaceAddress(USBZViewTargetCollectionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurrentViewTarget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZViewTargetCollectionInterface_GetViewTarget = FName(TEXT("GetViewTarget"));
	AActor* ISBZViewTargetCollectionInterface::Execute_GetViewTarget(const UObject* O, int32 InViewTargetIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZViewTargetCollectionInterface::StaticClass()));
		SBZViewTargetCollectionInterface_eventGetViewTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZViewTargetCollectionInterface_GetViewTarget);
		if (Func)
		{
			Parms.InViewTargetIndex=InViewTargetIndex;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZViewTargetCollectionInterface*)(O->GetNativeInterfaceAddress(USBZViewTargetCollectionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetViewTarget_Implementation(InViewTargetIndex);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZViewTargetCollectionInterface_GetViewTargetCount = FName(TEXT("GetViewTargetCount"));
	int32 ISBZViewTargetCollectionInterface::Execute_GetViewTargetCount(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZViewTargetCollectionInterface::StaticClass()));
		SBZViewTargetCollectionInterface_eventGetViewTargetCount_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZViewTargetCollectionInterface_GetViewTargetCount);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZViewTargetCollectionInterface*)(O->GetNativeInterfaceAddress(USBZViewTargetCollectionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetViewTargetCount_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZViewTargetCollectionInterface_GetViewTargetIndex = FName(TEXT("GetViewTargetIndex"));
	int32 ISBZViewTargetCollectionInterface::Execute_GetViewTargetIndex(const UObject* O, AActor* ViewTarget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZViewTargetCollectionInterface::StaticClass()));
		SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZViewTargetCollectionInterface_GetViewTargetIndex);
		if (Func)
		{
			Parms.ViewTarget=ViewTarget;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZViewTargetCollectionInterface*)(O->GetNativeInterfaceAddress(USBZViewTargetCollectionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetViewTargetIndex_Implementation(ViewTarget);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
