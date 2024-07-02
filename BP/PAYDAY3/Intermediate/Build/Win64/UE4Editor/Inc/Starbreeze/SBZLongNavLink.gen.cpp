// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLongNavLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLongNavLink() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLongNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLongNavLink();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSmartLinkReachedSignature__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmartNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLongNavLinkPlatform_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLongNavLink::execOnSmartLinkReached)
	{
		P_GET_OBJECT(AActor,Z_Param_MovingActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DestinationPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSmartLinkReached(Z_Param_MovingActor,Z_Param_Out_DestinationPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLongNavLink::execSetLinkEnabled)
	{
		P_GET_UBOOL(Z_Param_bInLinkEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkEnabled(Z_Param_bInLinkEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLongNavLink::execSetNavArea)
	{
		P_GET_OBJECT(UClass,Z_Param_AreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNavArea(Z_Param_AreaClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLongNavLink::execSetPlatformNavArea)
	{
		P_GET_OBJECT(UClass,Z_Param_AreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlatformNavArea(Z_Param_AreaClass);
		P_NATIVE_END;
	}
	void ASBZLongNavLink::StaticRegisterNativesASBZLongNavLink()
	{
		UClass* Class = ASBZLongNavLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSmartLinkReached", &ASBZLongNavLink::execOnSmartLinkReached },
			{ "SetLinkEnabled", &ASBZLongNavLink::execSetLinkEnabled },
			{ "SetNavArea", &ASBZLongNavLink::execSetNavArea },
			{ "SetPlatformNavArea", &ASBZLongNavLink::execSetPlatformNavArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics
	{
		struct SBZLongNavLink_eventOnSmartLinkReached_Parms
		{
			AActor* MovingActor;
			FVector DestinationPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_MovingActor = { "MovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLongNavLink_eventOnSmartLinkReached_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLongNavLink_eventOnSmartLinkReached_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_DestinationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_DestinationPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_MovingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::NewProp_DestinationPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLongNavLink, nullptr, "OnSmartLinkReached", nullptr, nullptr, sizeof(SBZLongNavLink_eventOnSmartLinkReached_Parms), Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics
	{
		struct SBZLongNavLink_eventSetLinkEnabled_Parms
		{
			bool bInLinkEnabled;
		};
		static void NewProp_bInLinkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLinkEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled_SetBit(void* Obj)
	{
		((SBZLongNavLink_eventSetLinkEnabled_Parms*)Obj)->bInLinkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled = { "bInLinkEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLongNavLink_eventSetLinkEnabled_Parms), &Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::NewProp_bInLinkEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLongNavLink, nullptr, "SetLinkEnabled", nullptr, nullptr, sizeof(SBZLongNavLink_eventSetLinkEnabled_Parms), Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics
	{
		struct SBZLongNavLink_eventSetNavArea_Parms
		{
			TSubclassOf<UNavArea>  AreaClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLongNavLink_eventSetNavArea_Parms, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::NewProp_AreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLongNavLink, nullptr, "SetNavArea", nullptr, nullptr, sizeof(SBZLongNavLink_eventSetNavArea_Parms), Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLongNavLink_SetNavArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLongNavLink_SetNavArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics
	{
		struct SBZLongNavLink_eventSetPlatformNavArea_Parms
		{
			TSubclassOf<UNavArea>  AreaClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLongNavLink_eventSetPlatformNavArea_Parms, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::NewProp_AreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLongNavLink, nullptr, "SetPlatformNavArea", nullptr, nullptr, sizeof(SBZLongNavLink_eventSetPlatformNavArea_Parms), Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLongNavLink_NoRegister()
	{
		return ASBZLongNavLink::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLongNavLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNavLinkReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavLinkReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformNavArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlatformNavArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubPlatformsStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubPlatformsStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubPlatformsEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubPlatformsEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNavLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNavLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNavLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndNavLink;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavMeshPlatforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavMeshPlatforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLongNavLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLongNavLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLongNavLink_OnSmartLinkReached, "OnSmartLinkReached" }, // 320702703
		{ &Z_Construct_UFunction_ASBZLongNavLink_SetLinkEnabled, "SetLinkEnabled" }, // 4202175656
		{ &Z_Construct_UFunction_ASBZLongNavLink_SetNavArea, "SetNavArea" }, // 1511903703
		{ &Z_Construct_UFunction_ASBZLongNavLink_SetPlatformNavArea, "SetPlatformNavArea" }, // 57183489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "SBZLongNavLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_OnNavLinkReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_OnNavLinkReached = { "OnNavLinkReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, OnNavLinkReached), Z_Construct_UDelegateFunction_Starbreeze_SBZSmartLinkReachedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_OnNavLinkReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_OnNavLinkReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavArea = { "NavArea", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, NavArea), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_PlatformNavArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_PlatformNavArea = { "PlatformNavArea", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, PlatformNavArea), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_PlatformNavArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_PlatformNavArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, Direction), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsStart = { "SubPlatformsStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, SubPlatformsStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsEnd = { "SubPlatformsEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, SubPlatformsEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_StartNavLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_StartNavLink = { "StartNavLink", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, StartNavLink), Z_Construct_UClass_ASBZSmartNavLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_StartNavLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_StartNavLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_EndNavLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_EndNavLink = { "EndNavLink", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, EndNavLink), Z_Construct_UClass_ASBZSmartNavLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_EndNavLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_EndNavLink_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms_Inner = { "NavMeshPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZLongNavLinkPlatform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLongNavLink" },
		{ "ModuleRelativePath", "Public/SBZLongNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms = { "NavMeshPlatforms", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLongNavLink, NavMeshPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLongNavLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_OnNavLinkReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_PlatformNavArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_SubPlatformsEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_StartNavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_EndNavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLongNavLink_Statics::NewProp_NavMeshPlatforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLongNavLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLongNavLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLongNavLink_Statics::ClassParams = {
		&ASBZLongNavLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLongNavLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLongNavLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLongNavLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLongNavLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLongNavLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLongNavLink, 528884318);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLongNavLink>()
	{
		return ASBZLongNavLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLongNavLink(Z_Construct_UClass_ASBZLongNavLink, &ASBZLongNavLink::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLongNavLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLongNavLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
