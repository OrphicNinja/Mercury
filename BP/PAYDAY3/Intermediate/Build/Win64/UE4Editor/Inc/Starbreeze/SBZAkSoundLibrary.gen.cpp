// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAkSoundLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAkSoundLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAkSoundLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAkSoundLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ESBZAkPoolType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAkSoundLibrary::execSpawnAkComponentAttached)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(UAkAuxBus,Z_Param_EarlyReflectionsBus);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_ENUM(ESBZAkPoolType,Z_Param_PoolType);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_UBOOL(Z_Param_AutoPost);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EarlyReflectionsBusName);
		P_GET_UBOOL(Z_Param_AutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=USBZAkSoundLibrary::SpawnAkComponentAttached(Z_Param_AkEvent,Z_Param_EarlyReflectionsBus,Z_Param_AttachToComponent,ESBZAkPoolType(Z_Param_PoolType),Z_Param_AttachPointName,Z_Param_AutoPost,Z_Param_EventName,Z_Param_EarlyReflectionsBusName,Z_Param_AutoDestroy);
		P_NATIVE_END;
	}
	void USBZAkSoundLibrary::StaticRegisterNativesUSBZAkSoundLibrary()
	{
		UClass* Class = USBZAkSoundLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAkComponentAttached", &USBZAkSoundLibrary::execSpawnAkComponentAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics
	{
		struct SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms
		{
			UAkAudioEvent* AkEvent;
			UAkAuxBus* EarlyReflectionsBus;
			USceneComponent* AttachToComponent;
			ESBZAkPoolType PoolType;
			FName AttachPointName;
			bool AutoPost;
			FString EventName;
			FString EarlyReflectionsBusName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionsBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionsBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionsBusName;
		static void NewProp_AutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBus = { "EarlyReflectionsBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, EarlyReflectionsBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_PoolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_PoolType = { "PoolType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, PoolType), Z_Construct_UEnum_AkAudio_ESBZAkPoolType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms*)Obj)->AutoPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms), &Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBusName = { "EarlyReflectionsBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, EarlyReflectionsBusName), METADATA_PARAMS(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBusName_MetaData)) };
	void Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms*)Obj)->AutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms), &Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_PoolType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_PoolType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_EarlyReflectionsBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_AutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAkSoundLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAkSoundLibrary, nullptr, "SpawnAkComponentAttached", nullptr, nullptr, sizeof(SBZAkSoundLibrary_eventSpawnAkComponentAttached_Parms), Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAkSoundLibrary_NoRegister()
	{
		return USBZAkSoundLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZAkSoundLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAkSoundLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAkSoundLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAkSoundLibrary_SpawnAkComponentAttached, "SpawnAkComponentAttached" }, // 2398691599
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAkSoundLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAkSoundLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAkSoundLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAkSoundLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAkSoundLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAkSoundLibrary_Statics::ClassParams = {
		&USBZAkSoundLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAkSoundLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAkSoundLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAkSoundLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAkSoundLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAkSoundLibrary, 1837357394);
	template<> STARBREEZE_API UClass* StaticClass<USBZAkSoundLibrary>()
	{
		return USBZAkSoundLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAkSoundLibrary(Z_Construct_UClass_USBZAkSoundLibrary, &USBZAkSoundLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAkSoundLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAkSoundLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
