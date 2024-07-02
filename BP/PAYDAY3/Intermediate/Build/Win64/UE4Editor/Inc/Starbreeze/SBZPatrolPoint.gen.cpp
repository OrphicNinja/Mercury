// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPatrolPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPatrolPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPatrolPoint::execConnect)
	{
		P_GET_OBJECT(ASBZPatrolPoint,Z_Param_Next);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_Next);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPatrolPoint::execDisconnect)
	{
		P_GET_OBJECT(ASBZPatrolPoint,Z_Param_Next);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(Z_Param_Next);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPatrolPoint::execIsTestingPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTestingPoint();
		P_NATIVE_END;
	}
	void ASBZPatrolPoint::StaticRegisterNativesASBZPatrolPoint()
	{
		UClass* Class = ASBZPatrolPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &ASBZPatrolPoint::execConnect },
			{ "Disconnect", &ASBZPatrolPoint::execDisconnect },
			{ "IsTestingPoint", &ASBZPatrolPoint::execIsTestingPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics
	{
		struct SBZPatrolPoint_eventConnect_Parms
		{
			ASBZPatrolPoint* Next;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Next;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPatrolPoint_eventConnect_Parms, Next), Z_Construct_UClass_ASBZPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::NewProp_Next,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPatrolPoint, nullptr, "Connect", nullptr, nullptr, sizeof(SBZPatrolPoint_eventConnect_Parms), Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPatrolPoint_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPatrolPoint_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics
	{
		struct SBZPatrolPoint_eventDisconnect_Parms
		{
			ASBZPatrolPoint* Next;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Next;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPatrolPoint_eventDisconnect_Parms, Next), Z_Construct_UClass_ASBZPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::NewProp_Next,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPatrolPoint, nullptr, "Disconnect", nullptr, nullptr, sizeof(SBZPatrolPoint_eventDisconnect_Parms), Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPatrolPoint_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPatrolPoint_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics
	{
		struct SBZPatrolPoint_eventIsTestingPoint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPatrolPoint_eventIsTestingPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPatrolPoint_eventIsTestingPoint_Parms), &Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPatrolPoint, nullptr, "IsTestingPoint", nullptr, nullptr, sizeof(SBZPatrolPoint_eventIsTestingPoint_Parms), Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPatrolPoint_NoRegister()
	{
		return ASBZPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomSet_MetaData[];
#endif
		static void NewProp_bRandomSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaitTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePointRotation_MetaData[];
#endif
		static void NewProp_bUsePointRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePointRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTesting_MetaData[];
#endif
		static void NewProp_bIsTesting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTesting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPatrolPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPatrolPoint_Connect, "Connect" }, // 1929866862
		{ &Z_Construct_UFunction_ASBZPatrolPoint_Disconnect, "Disconnect" }, // 798518395
		{ &Z_Construct_UFunction_ASBZPatrolPoint_IsTestingPoint, "IsTestingPoint" }, // 3509820942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPatrolPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints_Inner = { "NextPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPatrolPoint" },
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints = { "NextPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPatrolPoint, NextPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPatrolPoint" },
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet_SetBit(void* Obj)
	{
		((ASBZPatrolPoint*)Obj)->bRandomSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet = { "bRandomSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPatrolPoint), &Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_WaitTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPatrolPoint" },
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_WaitTimeInterval = { "WaitTimeInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPatrolPoint, WaitTimeInterval), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_WaitTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_WaitTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPatrolPoint" },
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation_SetBit(void* Obj)
	{
		((ASBZPatrolPoint*)Obj)->bUsePointRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation = { "bUsePointRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPatrolPoint), &Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPatrolPoint" },
		{ "ModuleRelativePath", "Public/SBZPatrolPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting_SetBit(void* Obj)
	{
		((ASBZPatrolPoint*)Obj)->bIsTesting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting = { "bIsTesting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPatrolPoint), &Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_NextPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bRandomSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_WaitTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bUsePointRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPatrolPoint_Statics::NewProp_bIsTesting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPatrolPoint_Statics::ClassParams = {
		&ASBZPatrolPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPatrolPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPatrolPoint, 2786468998);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPatrolPoint>()
	{
		return ASBZPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPatrolPoint(Z_Construct_UClass_ASBZPatrolPoint, &ASBZPatrolPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
