// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackingState();
// End Cross Module References
	DEFINE_FUNCTION(USBZHackingComponent::execGetHackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZHackingState*)Z_Param__Result=P_THIS->GetHackingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHackingComponent::execMulticast_SetHackingState)
	{
		P_GET_ENUM(ESBZHackingState,Z_Param_NewHackingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetHackingState_Implementation(ESBZHackingState(Z_Param_NewHackingState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHackingComponent::execOnRep_HackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HackingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHackingComponent::execSetHackingState)
	{
		P_GET_ENUM(ESBZHackingState,Z_Param_NewHackingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHackingState(ESBZHackingState(Z_Param_NewHackingState));
		P_NATIVE_END;
	}
	static FName NAME_USBZHackingComponent_Multicast_SetHackingState = FName(TEXT("Multicast_SetHackingState"));
	void USBZHackingComponent::Multicast_SetHackingState(ESBZHackingState NewHackingState)
	{
		SBZHackingComponent_eventMulticast_SetHackingState_Parms Parms;
		Parms.NewHackingState=NewHackingState;
		ProcessEvent(FindFunctionChecked(NAME_USBZHackingComponent_Multicast_SetHackingState),&Parms);
	}
	void USBZHackingComponent::StaticRegisterNativesUSBZHackingComponent()
	{
		UClass* Class = USBZHackingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHackingState", &USBZHackingComponent::execGetHackingState },
			{ "Multicast_SetHackingState", &USBZHackingComponent::execMulticast_SetHackingState },
			{ "OnRep_HackingState", &USBZHackingComponent::execOnRep_HackingState },
			{ "SetHackingState", &USBZHackingComponent::execSetHackingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics
	{
		struct SBZHackingComponent_eventGetHackingState_Parms
		{
			ESBZHackingState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingComponent_eventGetHackingState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZHackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHackingComponent, nullptr, "GetHackingState", nullptr, nullptr, sizeof(SBZHackingComponent_eventGetHackingState_Parms), Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHackingComponent_GetHackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHackingComponent_GetHackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHackingState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHackingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::NewProp_NewHackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::NewProp_NewHackingState = { "NewHackingState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingComponent_eventMulticast_SetHackingState_Parms, NewHackingState), Z_Construct_UEnum_Starbreeze_ESBZHackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::NewProp_NewHackingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::NewProp_NewHackingState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHackingComponent, nullptr, "Multicast_SetHackingState", nullptr, nullptr, sizeof(SBZHackingComponent_eventMulticast_SetHackingState_Parms), Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHackingComponent, nullptr, "OnRep_HackingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics
	{
		struct SBZHackingComponent_eventSetHackingState_Parms
		{
			ESBZHackingState NewHackingState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHackingState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHackingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::NewProp_NewHackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::NewProp_NewHackingState = { "NewHackingState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingComponent_eventSetHackingState_Parms, NewHackingState), Z_Construct_UEnum_Starbreeze_ESBZHackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::NewProp_NewHackingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::NewProp_NewHackingState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHackingComponent, nullptr, "SetHackingState", nullptr, nullptr, sizeof(SBZHackingComponent_eventSetHackingState_Parms), Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHackingComponent_SetHackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHackingComponent_SetHackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHackingComponent_NoRegister()
	{
		return USBZHackingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZHackingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HackingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HackingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHackingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHackingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHackingComponent_GetHackingState, "GetHackingState" }, // 870271717
		{ &Z_Construct_UFunction_USBZHackingComponent_Multicast_SetHackingState, "Multicast_SetHackingState" }, // 521721123
		{ &Z_Construct_UFunction_USBZHackingComponent_OnRep_HackingState, "OnRep_HackingState" }, // 373022523
		{ &Z_Construct_UFunction_USBZHackingComponent_SetHackingState, "SetHackingState" }, // 2377018540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHackingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZHackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingComponent" },
		{ "ModuleRelativePath", "Public/SBZHackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState = { "HackingState", "OnRep_HackingState", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHackingComponent, HackingState), Z_Construct_UEnum_Starbreeze_ESBZHackingState, METADATA_PARAMS(Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHackingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHackingComponent_Statics::NewProp_HackingState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHackingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHackingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHackingComponent_Statics::ClassParams = {
		&USBZHackingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHackingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHackingComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHackingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHackingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHackingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHackingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHackingComponent, 4009125457);
	template<> STARBREEZE_API UClass* StaticClass<USBZHackingComponent>()
	{
		return USBZHackingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHackingComponent(Z_Construct_UClass_USBZHackingComponent, &USBZHackingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHackingComponent"), false, nullptr, nullptr, nullptr);

	void USBZHackingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HackingState(TEXT("HackingState"));

		const bool bIsValid = true
			&& Name_HackingState == ClassReps[(int32)ENetFields_Private::HackingState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZHackingComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHackingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
