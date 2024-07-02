// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISquad() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquad_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAISquad::execOnMemberKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_KilledMember);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMemberKilled(Z_Param_KilledMember);
		P_NATIVE_END;
	}
	void USBZAISquad::StaticRegisterNativesUSBZAISquad()
	{
		UClass* Class = USBZAISquad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMemberKilled", &USBZAISquad::execOnMemberKilled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics
	{
		struct SBZAISquad_eventOnMemberKilled_Parms
		{
			APawn* KilledMember;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::NewProp_KilledMember = { "KilledMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISquad_eventOnMemberKilled_Parms, KilledMember), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::NewProp_KilledMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISquad, nullptr, "OnMemberKilled", nullptr, nullptr, sizeof(SBZAISquad_eventOnMemberKilled_Parms), Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISquad_OnMemberKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISquad_OnMemberKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAISquad_NoRegister()
	{
		return USBZAISquad::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MostNavRestrictedMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MostNavRestrictedMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MostRestrictedNQF_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MostRestrictedNQF;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAISquad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAISquad_OnMemberKilled, "OnMemberKilled" }, // 2067745409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISquad.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquad" },
		{ "ModuleRelativePath", "Public/SBZAISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0044000000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquad, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquad_Statics::NewProp_CurrentOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquad" },
		{ "ModuleRelativePath", "Public/SBZAISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISquad_Statics::NewProp_CurrentOrder = { "CurrentOrder", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquad, CurrentOrder), Z_Construct_UClass_USBZAISquadOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISquad_Statics::NewProp_CurrentOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquad_Statics::NewProp_CurrentOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostNavRestrictedMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquad" },
		{ "ModuleRelativePath", "Public/SBZAISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostNavRestrictedMember = { "MostNavRestrictedMember", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquad, MostNavRestrictedMember), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostNavRestrictedMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostNavRestrictedMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostRestrictedNQF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquad" },
		{ "ModuleRelativePath", "Public/SBZAISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostRestrictedNQF = { "MostRestrictedNQF", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquad, MostRestrictedNQF), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostRestrictedNQF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostRestrictedNQF_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAISquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquad_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquad_Statics::NewProp_CurrentOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostNavRestrictedMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquad_Statics::NewProp_MostRestrictedNQF,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISquad_Statics::ClassParams = {
		&USBZAISquad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAISquad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquad_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISquad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISquad, 2273957852);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISquad>()
	{
		return USBZAISquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISquad(Z_Construct_UClass_USBZAISquad, &USBZAISquad::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
