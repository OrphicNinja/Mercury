// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLevelLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLevelLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLevelLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLevelLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLevelLibrary::execGetAllActorsOfClassInLevel)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLevelLibrary::GetAllActorsOfClassInLevel(Z_Param_Level,Z_Param_ActorClass,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLevelLibrary::execGetLevel)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevel**)Z_Param__Result=USBZLevelLibrary::GetLevel(Z_Param_InActor);
		P_NATIVE_END;
	}
	void USBZLevelLibrary::StaticRegisterNativesUSBZLevelLibrary()
	{
		UClass* Class = USBZLevelLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllActorsOfClassInLevel", &USBZLevelLibrary::execGetAllActorsOfClassInLevel },
			{ "GetLevel", &USBZLevelLibrary::execGetLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics
	{
		struct SBZLevelLibrary_eventGetAllActorsOfClassInLevel_Parms
		{
			ULevel* Level;
			TSubclassOf<AActor>  ActorClass;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelLibrary_eventGetAllActorsOfClassInLevel_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelLibrary_eventGetAllActorsOfClassInLevel_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelLibrary_eventGetAllActorsOfClassInLevel_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLevelLibrary, nullptr, "GetAllActorsOfClassInLevel", nullptr, nullptr, sizeof(SBZLevelLibrary_eventGetAllActorsOfClassInLevel_Parms), Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics
	{
		struct SBZLevelLibrary_eventGetLevel_Parms
		{
			AActor* InActor;
			ULevel* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelLibrary_eventGetLevel_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelLibrary_eventGetLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLevelLibrary, nullptr, "GetLevel", nullptr, nullptr, sizeof(SBZLevelLibrary_eventGetLevel_Parms), Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLevelLibrary_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLevelLibrary_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLevelLibrary_NoRegister()
	{
		return USBZLevelLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZLevelLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLevelLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLevelLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLevelLibrary_GetAllActorsOfClassInLevel, "GetAllActorsOfClassInLevel" }, // 2677338571
		{ &Z_Construct_UFunction_USBZLevelLibrary_GetLevel, "GetLevel" }, // 696292894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLevelLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLevelLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLevelLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLevelLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLevelLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLevelLibrary_Statics::ClassParams = {
		&USBZLevelLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLevelLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLevelLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLevelLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLevelLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLevelLibrary, 4290048785);
	template<> STARBREEZE_API UClass* StaticClass<USBZLevelLibrary>()
	{
		return USBZLevelLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLevelLibrary(Z_Construct_UClass_USBZLevelLibrary, &USBZLevelLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLevelLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLevelLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
