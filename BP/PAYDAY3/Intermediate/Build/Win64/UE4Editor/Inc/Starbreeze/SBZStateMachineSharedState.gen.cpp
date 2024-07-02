// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineSharedState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineSharedState() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineSharedState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineSharedState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineSharedState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineSharedState, nullptr, "OnServerInAction__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USBZStateMachineSharedState::execNotifyServerInActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyServerInActionPhase_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USBZStateMachineSharedState_NotifyServerInActionPhase = FName(TEXT("NotifyServerInActionPhase"));
	void USBZStateMachineSharedState::NotifyServerInActionPhase()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZStateMachineSharedState_NotifyServerInActionPhase),NULL);
	}
	void USBZStateMachineSharedState::StaticRegisterNativesUSBZStateMachineSharedState()
	{
		UClass* Class = USBZStateMachineSharedState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyServerInActionPhase", &USBZStateMachineSharedState::execNotifyServerInActionPhase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineSharedState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineSharedState, nullptr, "NotifyServerInActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineSharedState_NoRegister()
	{
		return USBZStateMachineSharedState::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineSharedState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnlineSessionPhase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSessionPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnlineSessionPhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineSharedState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineSharedState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineSharedState_NotifyServerInActionPhase, "NotifyServerInActionPhase" }, // 738600138
		{ &Z_Construct_UDelegateFunction_USBZStateMachineSharedState_OnServerInAction__DelegateSignature, "OnServerInAction__DelegateSignature" }, // 2167906757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineSharedState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZStateMachineSharedState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineSharedState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineSharedState" },
		{ "ModuleRelativePath", "Public/SBZStateMachineSharedState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase = { "OnlineSessionPhase", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineSharedState, OnlineSessionPhase), Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineSharedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineSharedState_Statics::NewProp_OnlineSessionPhase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineSharedState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineSharedState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineSharedState_Statics::ClassParams = {
		&USBZStateMachineSharedState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineSharedState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineSharedState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineSharedState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineSharedState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineSharedState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineSharedState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineSharedState, 4287799863);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineSharedState>()
	{
		return USBZStateMachineSharedState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineSharedState(Z_Construct_UClass_USBZStateMachineSharedState, &USBZStateMachineSharedState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineSharedState"), false, nullptr, nullptr, nullptr);

	void USBZStateMachineSharedState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OnlineSessionPhase(TEXT("OnlineSessionPhase"));

		const bool bIsValid = true
			&& Name_OnlineSessionPhase == ClassReps[(int32)ENetFields_Private::OnlineSessionPhase].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZStateMachineSharedState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineSharedState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
