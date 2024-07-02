// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseInteractRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseInteractRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractReqData();
// End Cross Module References
	DEFINE_FUNCTION(USBZBaseInteractRequirement::execBP_CheckRequirement)
	{
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_STRUCT_REF(FSBZInteractReqData,Z_Param_Out_OutData);
		P_GET_UBOOL(Z_Param_bIsSignalRequired);
		P_GET_UBOOL(Z_Param_bInIsScreenInteract);
		P_GET_UBOOL(Z_Param_bIsCasing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_CheckRequirement_Implementation(Z_Param_Interactor,Z_Param_Out_OutData,Z_Param_bIsSignalRequired,Z_Param_bInIsScreenInteract,Z_Param_bIsCasing);
		P_NATIVE_END;
	}
	static FName NAME_USBZBaseInteractRequirement_BP_CheckRequirement = FName(TEXT("BP_CheckRequirement"));
	bool USBZBaseInteractRequirement::BP_CheckRequirement(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const
	{
		SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.OutData=OutData;
		Parms.bIsSignalRequired=bIsSignalRequired ? true : false;
		Parms.bInIsScreenInteract=bInIsScreenInteract ? true : false;
		Parms.bIsCasing=bIsCasing ? true : false;
		const_cast<USBZBaseInteractRequirement*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZBaseInteractRequirement_BP_CheckRequirement),&Parms);
		OutData=Parms.OutData;
		return !!Parms.ReturnValue;
	}
	void USBZBaseInteractRequirement::StaticRegisterNativesUSBZBaseInteractRequirement()
	{
		UClass* Class = USBZBaseInteractRequirement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CheckRequirement", &USBZBaseInteractRequirement::execBP_CheckRequirement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutData;
		static void NewProp_bIsSignalRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSignalRequired;
		static void NewProp_bInIsScreenInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsScreenInteract;
		static void NewProp_bIsCasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCasing;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_Interactor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms, OutData), Z_Construct_UScriptStruct_FSBZInteractReqData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsSignalRequired_SetBit(void* Obj)
	{
		((SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms*)Obj)->bIsSignalRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsSignalRequired = { "bIsSignalRequired", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms), &Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsSignalRequired_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bInIsScreenInteract_SetBit(void* Obj)
	{
		((SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms*)Obj)->bInIsScreenInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bInIsScreenInteract = { "bInIsScreenInteract", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms), &Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bInIsScreenInteract_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsCasing_SetBit(void* Obj)
	{
		((SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms*)Obj)->bIsCasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsCasing = { "bIsCasing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms), &Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsCasing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms), &Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_OutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsSignalRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bInIsScreenInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_bIsCasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInteractRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInteractRequirement, nullptr, "BP_CheckRequirement", nullptr, nullptr, sizeof(SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms), Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBaseInteractRequirement_NoRegister()
	{
		return USBZBaseInteractRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseInteractRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseInteractRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBaseInteractRequirement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBaseInteractRequirement_BP_CheckRequirement, "BP_CheckRequirement" }, // 2370222425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseInteractRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseInteractRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseInteractRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseInteractRequirement_Statics::ClassParams = {
		&USBZBaseInteractRequirement::StaticClass,
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
		0x002010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseInteractRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseInteractRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseInteractRequirement, 1657174853);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseInteractRequirement>()
	{
		return USBZBaseInteractRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseInteractRequirement(Z_Construct_UClass_USBZBaseInteractRequirement, &USBZBaseInteractRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseInteractRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseInteractRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
