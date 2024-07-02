// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableSensorTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableSensorTool() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableSensorTool_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableSensorTool();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableToolBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSensorAmmoDepleted__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlaceableSensorTool::execClient_DisablePickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_DisablePickup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableSensorTool::execMulticast_SensorAmmoDepleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SensorAmmoDepleted_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlaceableSensorTool_Client_DisablePickup = FName(TEXT("Client_DisablePickup"));
	void ASBZPlaceableSensorTool::Client_DisablePickup()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableSensorTool_Client_DisablePickup),NULL);
	}
	static FName NAME_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted = FName(TEXT("Multicast_SensorAmmoDepleted"));
	void ASBZPlaceableSensorTool::Multicast_SensorAmmoDepleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted),NULL);
	}
	void ASBZPlaceableSensorTool::StaticRegisterNativesASBZPlaceableSensorTool()
	{
		UClass* Class = ASBZPlaceableSensorTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_DisablePickup", &ASBZPlaceableSensorTool::execClient_DisablePickup },
			{ "Multicast_SensorAmmoDepleted", &ASBZPlaceableSensorTool::execMulticast_SensorAmmoDepleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableSensorTool, nullptr, "Client_DisablePickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableSensorTool, nullptr, "Multicast_SensorAmmoDepleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlaceableSensorTool_NoRegister()
	{
		return ASBZPlaceableSensorTool::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlaceableSensorTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMarkTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoMarkTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMarkableAICount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMarkableAICount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSensorAmmoDepleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSensorAmmoDepleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPickupDisabled_MetaData[];
#endif
		static void NewProp_bIsPickupDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPickupDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlaceableSensorTool_Client_DisablePickup, "Client_DisablePickup" }, // 2817992452
		{ &Z_Construct_UFunction_ASBZPlaceableSensorTool_Multicast_SensorAmmoDepleted, "Multicast_SensorAmmoDepleted" }, // 234719043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableSensorTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSensorTool, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSensorTool, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_AutoMarkTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_AutoMarkTickInterval = { "AutoMarkTickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSensorTool, AutoMarkTickInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_AutoMarkTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_AutoMarkTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SensorRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SensorRange = { "SensorRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSensorTool, SensorRange), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SensorRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SensorRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_MaxMarkableAICount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_MaxMarkableAICount = { "MaxMarkableAICount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSensorTool, MaxMarkableAICount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_MaxMarkableAICount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_MaxMarkableAICount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_OnSensorAmmoDepleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_OnSensorAmmoDepleted = { "OnSensorAmmoDepleted", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableSensorTool, OnSensorAmmoDepleted), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSensorAmmoDepleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_OnSensorAmmoDepleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_OnSensorAmmoDepleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableSensorTool" },
		{ "ModuleRelativePath", "Public/SBZPlaceableSensorTool.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled_SetBit(void* Obj)
	{
		((ASBZPlaceableSensorTool*)Obj)->bIsPickupDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled = { "bIsPickupDisabled", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlaceableSensorTool), &Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_AutoMarkTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_SensorRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_MaxMarkableAICount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_OnSensorAmmoDepleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::NewProp_bIsPickupDisabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlaceableSensorTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::ClassParams = {
		&ASBZPlaceableSensorTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlaceableSensorTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlaceableSensorTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlaceableSensorTool, 2009778041);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlaceableSensorTool>()
	{
		return ASBZPlaceableSensorTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlaceableSensorTool(Z_Construct_UClass_ASBZPlaceableSensorTool, &ASBZPlaceableSensorTool::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlaceableSensorTool"), false, nullptr, nullptr, nullptr);

	void ASBZPlaceableSensorTool::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsPickupDisabled(TEXT("bIsPickupDisabled"));

		const bool bIsValid = true
			&& Name_bIsPickupDisabled == ClassReps[(int32)ENetFields_Private::bIsPickupDisabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPlaceableSensorTool"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlaceableSensorTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
