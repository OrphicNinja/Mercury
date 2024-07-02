// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Rescue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Rescue() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Rescue_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Rescue();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_Rescue::execOnTargetHostageStateChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewHostageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetHostageStateChanged(Z_Param_NewHostageState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_Rescue::execOnTargetKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_KilledPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetKilled(Z_Param_KilledPawn);
		P_NATIVE_END;
	}
	void USBZAIOrder_Rescue::StaticRegisterNativesUSBZAIOrder_Rescue()
	{
		UClass* Class = USBZAIOrder_Rescue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetHostageStateChanged", &USBZAIOrder_Rescue::execOnTargetHostageStateChanged },
			{ "OnTargetKilled", &USBZAIOrder_Rescue::execOnTargetKilled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics
	{
		struct SBZAIOrder_Rescue_eventOnTargetHostageStateChanged_Parms
		{
			uint8 NewHostageState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHostageState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::NewProp_NewHostageState = { "NewHostageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_Rescue_eventOnTargetHostageStateChanged_Parms, NewHostageState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::NewProp_NewHostageState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_Rescue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_Rescue, nullptr, "OnTargetHostageStateChanged", nullptr, nullptr, sizeof(SBZAIOrder_Rescue_eventOnTargetHostageStateChanged_Parms), Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics
	{
		struct SBZAIOrder_Rescue_eventOnTargetKilled_Parms
		{
			APawn* KilledPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::NewProp_KilledPawn = { "KilledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_Rescue_eventOnTargetKilled_Parms, KilledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::NewProp_KilledPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_Rescue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_Rescue, nullptr, "OnTargetKilled", nullptr, nullptr, sizeof(SBZAIOrder_Rescue_eventOnTargetKilled_Parms), Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Rescue_NoRegister()
	{
		return USBZAIOrder_Rescue::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Rescue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RescueHostageComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RescueHostageComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RescueTargetOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RescueTargetOutline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Rescue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder_TacticalMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_Rescue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetHostageStateChanged, "OnTargetHostageStateChanged" }, // 3735534508
		{ &Z_Construct_UFunction_USBZAIOrder_Rescue_OnTargetKilled, "OnTargetKilled" }, // 3124848654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Rescue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Rescue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Rescue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueHostageComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Rescue" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Rescue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueHostageComment = { "RescueHostageComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Rescue, RescueHostageComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueHostageComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueHostageComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueTargetOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Rescue" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Rescue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueTargetOutline = { "RescueTargetOutline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Rescue, RescueTargetOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueTargetOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueTargetOutline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Rescue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueHostageComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Rescue_Statics::NewProp_RescueTargetOutline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Rescue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Rescue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Rescue_Statics::ClassParams = {
		&USBZAIOrder_Rescue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_Rescue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Rescue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Rescue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Rescue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Rescue, 3968445921);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Rescue>()
	{
		return USBZAIOrder_Rescue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Rescue(Z_Construct_UClass_USBZAIOrder_Rescue, &USBZAIOrder_Rescue::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Rescue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Rescue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
