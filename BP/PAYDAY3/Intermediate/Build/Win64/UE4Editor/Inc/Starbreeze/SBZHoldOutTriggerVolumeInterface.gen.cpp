// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutTriggerVolumeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutTriggerVolumeInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorFilterComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZHoldOutTriggerVolumeInterface::execGetActorFilterComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZActorFilterComponent**)Z_Param__Result=P_THIS->GetActorFilterComponent_Implementation();
		P_NATIVE_END;
	}
	USBZActorFilterComponent* ISBZHoldOutTriggerVolumeInterface::GetActorFilterComponent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorFilterComponent instead.");
		SBZHoldOutTriggerVolumeInterface_eventGetActorFilterComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void USBZHoldOutTriggerVolumeInterface::StaticRegisterNativesUSBZHoldOutTriggerVolumeInterface()
	{
		UClass* Class = USBZHoldOutTriggerVolumeInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorFilterComponent", &ISBZHoldOutTriggerVolumeInterface::execGetActorFilterComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutTriggerVolumeInterface_eventGetActorFilterComponent_Parms, ReturnValue), Z_Construct_UClass_USBZActorFilterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutTriggerVolumeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface, nullptr, "GetActorFilterComponent", nullptr, nullptr, sizeof(SBZHoldOutTriggerVolumeInterface_eventGetActorFilterComponent_Parms), Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_NoRegister()
	{
		return USBZHoldOutTriggerVolumeInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent, "GetActorFilterComponent" }, // 787169331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutTriggerVolumeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZHoldOutTriggerVolumeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::ClassParams = {
		&USBZHoldOutTriggerVolumeInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutTriggerVolumeInterface, 247265917);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutTriggerVolumeInterface>()
	{
		return USBZHoldOutTriggerVolumeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutTriggerVolumeInterface(Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface, &USBZHoldOutTriggerVolumeInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutTriggerVolumeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutTriggerVolumeInterface);
	static FName NAME_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent = FName(TEXT("GetActorFilterComponent"));
	USBZActorFilterComponent* ISBZHoldOutTriggerVolumeInterface::Execute_GetActorFilterComponent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZHoldOutTriggerVolumeInterface::StaticClass()));
		SBZHoldOutTriggerVolumeInterface_eventGetActorFilterComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZHoldOutTriggerVolumeInterface_GetActorFilterComponent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZHoldOutTriggerVolumeInterface*)(O->GetNativeInterfaceAddress(USBZHoldOutTriggerVolumeInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetActorFilterComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
