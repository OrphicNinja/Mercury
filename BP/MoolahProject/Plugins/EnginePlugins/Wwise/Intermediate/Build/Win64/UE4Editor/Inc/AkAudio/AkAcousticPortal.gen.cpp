// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortal() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAkAcousticPortal::execClosePortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAcousticPortal::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AkAcousticPortalState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAcousticPortal::execOpenPortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAcousticPortal::execSetExtent)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtent(Z_Param_Out_Extent);
		P_NATIVE_END;
	}
	void AAkAcousticPortal::StaticRegisterNativesAAkAcousticPortal()
	{
		UClass* Class = AAkAcousticPortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePortal", &AAkAcousticPortal::execClosePortal },
			{ "GetCurrentState", &AAkAcousticPortal::execGetCurrentState },
			{ "OpenPortal", &AAkAcousticPortal::execOpenPortal },
			{ "SetExtent", &AAkAcousticPortal::execSetExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "ClosePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics
	{
		struct AkAcousticPortal_eventGetCurrentState_Parms
		{
			AkAcousticPortalState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAcousticPortal_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(AkAcousticPortal_eventGetCurrentState_Parms), Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "OpenPortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics
	{
		struct AkAcousticPortal_eventSetExtent_Parms
		{
			FVector Extent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAcousticPortal_eventSetExtent_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::NewProp_Extent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::NewProp_Extent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "SetExtent", nullptr, nullptr, sizeof(AkAcousticPortal_eventSetExtent_Parms), Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_SetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_SetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister()
	{
		return AAkAcousticPortal::StaticClass();
	}
	struct Z_Construct_UClass_AAkAcousticPortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Portal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresStateMigration_MetaData[];
#endif
		static void NewProp_bRequiresStateMigration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresStateMigration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkAcousticPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAkAcousticPortal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAcousticPortal_ClosePortal, "ClosePortal" }, // 961183633
		{ &Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState, "GetCurrentState" }, // 2583147259
		{ &Z_Construct_UFunction_AAkAcousticPortal_OpenPortal, "OpenPortal" }, // 2610403247
		{ &Z_Construct_UFunction_AAkAcousticPortal_SetExtent, "SetExtent" }, // 1820352775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkAcousticPortal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticPortal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAcousticPortal, Portal), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAcousticPortal, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	void Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_SetBit(void* Obj)
	{
		((AAkAcousticPortal*)Obj)->bRequiresStateMigration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration = { "bRequiresStateMigration", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAkAcousticPortal), &Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkAcousticPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAcousticPortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkAcousticPortal_Statics::ClassParams = {
		&AAkAcousticPortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkAcousticPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkAcousticPortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAcousticPortal, 3869008304);
	template<> AKAUDIO_API UClass* StaticClass<AAkAcousticPortal>()
	{
		return AAkAcousticPortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAcousticPortal(Z_Construct_UClass_AAkAcousticPortal, &AAkAcousticPortal::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAcousticPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAcousticPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
