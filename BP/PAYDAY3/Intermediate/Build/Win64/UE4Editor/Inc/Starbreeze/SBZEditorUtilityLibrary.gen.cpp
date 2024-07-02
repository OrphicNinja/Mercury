// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEditorUtilityLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEditorUtilityLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEditorUtilityLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEditorUtilityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZEditorUtilityLibrary::execGetEditorInstanceID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZEditorUtilityLibrary::GetEditorInstanceID(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZEditorUtilityLibrary::execIsSbzLevelScriptActor)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZEditorUtilityLibrary::IsSbzLevelScriptActor(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZEditorUtilityLibrary::execResetToBlueprintDefault)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZEditorUtilityLibrary::ResetToBlueprintDefault(Z_Param_Actor);
		P_NATIVE_END;
	}
	void USBZEditorUtilityLibrary::StaticRegisterNativesUSBZEditorUtilityLibrary()
	{
		UClass* Class = USBZEditorUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditorInstanceID", &USBZEditorUtilityLibrary::execGetEditorInstanceID },
			{ "IsSbzLevelScriptActor", &USBZEditorUtilityLibrary::execIsSbzLevelScriptActor },
			{ "ResetToBlueprintDefault", &USBZEditorUtilityLibrary::execResetToBlueprintDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics
	{
		struct SBZEditorUtilityLibrary_eventGetEditorInstanceID_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEditorUtilityLibrary_eventGetEditorInstanceID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEditorUtilityLibrary_eventGetEditorInstanceID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEditorUtilityLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEditorUtilityLibrary, nullptr, "GetEditorInstanceID", nullptr, nullptr, sizeof(SBZEditorUtilityLibrary_eventGetEditorInstanceID_Parms), Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics
	{
		struct SBZEditorUtilityLibrary_eventIsSbzLevelScriptActor_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEditorUtilityLibrary_eventIsSbzLevelScriptActor_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZEditorUtilityLibrary_eventIsSbzLevelScriptActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZEditorUtilityLibrary_eventIsSbzLevelScriptActor_Parms), &Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEditorUtilityLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEditorUtilityLibrary, nullptr, "IsSbzLevelScriptActor", nullptr, nullptr, sizeof(SBZEditorUtilityLibrary_eventIsSbzLevelScriptActor_Parms), Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics
	{
		struct SBZEditorUtilityLibrary_eventResetToBlueprintDefault_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEditorUtilityLibrary_eventResetToBlueprintDefault_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZEditorUtilityLibrary_eventResetToBlueprintDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZEditorUtilityLibrary_eventResetToBlueprintDefault_Parms), &Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEditorUtilityLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEditorUtilityLibrary, nullptr, "ResetToBlueprintDefault", nullptr, nullptr, sizeof(SBZEditorUtilityLibrary_eventResetToBlueprintDefault_Parms), Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZEditorUtilityLibrary_NoRegister()
	{
		return USBZEditorUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZEditorUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZEditorUtilityLibrary_GetEditorInstanceID, "GetEditorInstanceID" }, // 3939262680
		{ &Z_Construct_UFunction_USBZEditorUtilityLibrary_IsSbzLevelScriptActor, "IsSbzLevelScriptActor" }, // 1186090222
		{ &Z_Construct_UFunction_USBZEditorUtilityLibrary_ResetToBlueprintDefault, "ResetToBlueprintDefault" }, // 2837493136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEditorUtilityLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEditorUtilityLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEditorUtilityLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::ClassParams = {
		&USBZEditorUtilityLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEditorUtilityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEditorUtilityLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEditorUtilityLibrary, 3841410463);
	template<> STARBREEZE_API UClass* StaticClass<USBZEditorUtilityLibrary>()
	{
		return USBZEditorUtilityLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEditorUtilityLibrary(Z_Construct_UClass_USBZEditorUtilityLibrary, &USBZEditorUtilityLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEditorUtilityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEditorUtilityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
