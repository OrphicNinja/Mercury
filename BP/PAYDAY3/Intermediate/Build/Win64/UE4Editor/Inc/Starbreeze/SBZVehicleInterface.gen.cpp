// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZVehicleInterface::execGetSpawnComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSpawnComponent**)Z_Param__Result=P_THIS->GetSpawnComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVehicleInterface::execGetSplineFollowingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSplineFollowingComponent**)Z_Param__Result=P_THIS->GetSplineFollowingComponent();
		P_NATIVE_END;
	}
	void USBZVehicleInterface::StaticRegisterNativesUSBZVehicleInterface()
	{
		UClass* Class = USBZVehicleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnComponent", &ISBZVehicleInterface::execGetSpawnComponent },
			{ "GetSplineFollowingComponent", &ISBZVehicleInterface::execGetSplineFollowingComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics
	{
		struct SBZVehicleInterface_eventGetSpawnComponent_Parms
		{
			USBZVehicleSpawnComponent* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleInterface_eventGetSpawnComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleInterface, nullptr, "GetSpawnComponent", nullptr, nullptr, sizeof(SBZVehicleInterface_eventGetSpawnComponent_Parms), Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics
	{
		struct SBZVehicleInterface_eventGetSplineFollowingComponent_Parms
		{
			USBZVehicleSplineFollowingComponent* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleInterface_eventGetSplineFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleInterface, nullptr, "GetSplineFollowingComponent", nullptr, nullptr, sizeof(SBZVehicleInterface_eventGetSplineFollowingComponent_Parms), Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleInterface_NoRegister()
	{
		return USBZVehicleInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleInterface_GetSpawnComponent, "GetSpawnComponent" }, // 1248958776
		{ &Z_Construct_UFunction_USBZVehicleInterface_GetSplineFollowingComponent, "GetSplineFollowingComponent" }, // 45370840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SBZVehicleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZVehicleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleInterface_Statics::ClassParams = {
		&USBZVehicleInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleInterface, 1704081523);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleInterface>()
	{
		return USBZVehicleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleInterface(Z_Construct_UClass_USBZVehicleInterface, &USBZVehicleInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
