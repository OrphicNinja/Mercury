// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZParticleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZParticleLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZParticleLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZParticleLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZParticleLibrary::execInternalSpawnPooledEmitterAtLocation)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_GET_STRUCT(FVector,Z_Param_SpawnScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystemComponent**)Z_Param__Result=USBZParticleLibrary::InternalSpawnPooledEmitterAtLocation(Z_Param_World,Z_Param_EmitterTemplate,Z_Param_SpawnLocation,Z_Param_SpawnRotation,Z_Param_SpawnScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZParticleLibrary::execSpawnPooledEmitterAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UParticleSystem,Z_Param_EmitterTemplate);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UParticleSystemComponent**)Z_Param__Result=USBZParticleLibrary::SpawnPooledEmitterAtLocation(Z_Param_WorldContextObject,Z_Param_EmitterTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale);
		P_NATIVE_END;
	}
	void USBZParticleLibrary::StaticRegisterNativesUSBZParticleLibrary()
	{
		UClass* Class = USBZParticleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InternalSpawnPooledEmitterAtLocation", &USBZParticleLibrary::execInternalSpawnPooledEmitterAtLocation },
			{ "SpawnPooledEmitterAtLocation", &USBZParticleLibrary::execSpawnPooledEmitterAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics
	{
		struct SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms
		{
			const UWorld* World;
			UParticleSystem* EmitterTemplate;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			FVector SpawnScale;
			UParticleSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterTemplate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnScale;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_EmitterTemplate = { "EmitterTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms, EmitterTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_SpawnScale = { "SpawnScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms, SpawnScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms, ReturnValue), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_EmitterTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_SpawnScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParticleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParticleLibrary, nullptr, "InternalSpawnPooledEmitterAtLocation", nullptr, nullptr, sizeof(SBZParticleLibrary_eventInternalSpawnPooledEmitterAtLocation_Parms), Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics
	{
		struct SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UParticleSystem* EmitterTemplate;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			UParticleSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterTemplate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_EmitterTemplate = { "EmitterTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms, EmitterTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms, ReturnValue), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_EmitterTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZParticleLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZParticleLibrary, nullptr, "SpawnPooledEmitterAtLocation", nullptr, nullptr, sizeof(SBZParticleLibrary_eventSpawnPooledEmitterAtLocation_Parms), Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZParticleLibrary_NoRegister()
	{
		return USBZParticleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZParticleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZParticleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZParticleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZParticleLibrary_InternalSpawnPooledEmitterAtLocation, "InternalSpawnPooledEmitterAtLocation" }, // 59296641
		{ &Z_Construct_UFunction_USBZParticleLibrary_SpawnPooledEmitterAtLocation, "SpawnPooledEmitterAtLocation" }, // 606252281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZParticleLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZParticleLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZParticleLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZParticleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZParticleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZParticleLibrary_Statics::ClassParams = {
		&USBZParticleLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZParticleLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZParticleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZParticleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZParticleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZParticleLibrary, 767438717);
	template<> STARBREEZE_API UClass* StaticClass<USBZParticleLibrary>()
	{
		return USBZParticleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZParticleLibrary(Z_Construct_UClass_USBZParticleLibrary, &USBZParticleLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZParticleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZParticleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
