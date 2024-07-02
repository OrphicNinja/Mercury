// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorContainerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorContainerLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorContainerLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorContainerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorContainer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZActorContainerLibrary::execFindNearbyActorsFromContainer)
	{
		P_GET_OBJECT(USBZActorContainer,Z_Param_Container);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USBZActorContainerLibrary::FindNearbyActorsFromContainer(Z_Param_Container,Z_Param_Out_Position,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorContainerLibrary::execFindNearestActorFromContainer)
	{
		P_GET_OBJECT(USBZActorContainer,Z_Param_Container);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=USBZActorContainerLibrary::FindNearestActorFromContainer(Z_Param_Container,Z_Param_Out_Location);
		P_NATIVE_END;
	}
	void USBZActorContainerLibrary::StaticRegisterNativesUSBZActorContainerLibrary()
	{
		UClass* Class = USBZActorContainerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindNearbyActorsFromContainer", &USBZActorContainerLibrary::execFindNearbyActorsFromContainer },
			{ "FindNearestActorFromContainer", &USBZActorContainerLibrary::execFindNearestActorFromContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics
	{
		struct SBZActorContainerLibrary_eventFindNearbyActorsFromContainer_Parms
		{
			USBZActorContainer* Container;
			FVector Position;
			float Distance;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Container_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearbyActorsFromContainer_Parms, Container), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearbyActorsFromContainer_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearbyActorsFromContainer_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearbyActorsFromContainer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorContainerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorContainerLibrary, nullptr, "FindNearbyActorsFromContainer", nullptr, nullptr, sizeof(SBZActorContainerLibrary_eventFindNearbyActorsFromContainer_Parms), Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics
	{
		struct SBZActorContainerLibrary_eventFindNearestActorFromContainer_Parms
		{
			const USBZActorContainer* Container;
			FVector Location;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Container_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearestActorFromContainer_Parms, Container), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearestActorFromContainer_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorContainerLibrary_eventFindNearestActorFromContainer_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorContainerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorContainerLibrary, nullptr, "FindNearestActorFromContainer", nullptr, nullptr, sizeof(SBZActorContainerLibrary_eventFindNearestActorFromContainer_Parms), Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZActorContainerLibrary_NoRegister()
	{
		return USBZActorContainerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZActorContainerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActorContainerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZActorContainerLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZActorContainerLibrary_FindNearbyActorsFromContainer, "FindNearbyActorsFromContainer" }, // 1895119939
		{ &Z_Construct_UFunction_USBZActorContainerLibrary_FindNearestActorFromContainer, "FindNearestActorFromContainer" }, // 3184464110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorContainerLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActorContainerLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorContainerLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActorContainerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActorContainerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActorContainerLibrary_Statics::ClassParams = {
		&USBZActorContainerLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZActorContainerLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorContainerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActorContainerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActorContainerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActorContainerLibrary, 3470123878);
	template<> STARBREEZE_API UClass* StaticClass<USBZActorContainerLibrary>()
	{
		return USBZActorContainerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActorContainerLibrary(Z_Construct_UClass_USBZActorContainerLibrary, &USBZActorContainerLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActorContainerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActorContainerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
