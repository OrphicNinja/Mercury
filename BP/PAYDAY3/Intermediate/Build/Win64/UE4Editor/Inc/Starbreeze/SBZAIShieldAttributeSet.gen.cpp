// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIShieldAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIShieldAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShieldAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShieldAttributeSet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShield_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIShieldAttributeSet::execMulticast_SetVisorArmor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetVisorArmor_Implementation(Z_Param_NewCurrentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShieldAttributeSet::execOnRep_VisorArmor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VisorArmor(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	static FName NAME_USBZAIShieldAttributeSet_Multicast_SetVisorArmor = FName(TEXT("Multicast_SetVisorArmor"));
	void USBZAIShieldAttributeSet::Multicast_SetVisorArmor(float NewCurrentValue)
	{
		SBZAIShieldAttributeSet_eventMulticast_SetVisorArmor_Parms Parms;
		Parms.NewCurrentValue=NewCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIShieldAttributeSet_Multicast_SetVisorArmor),&Parms);
	}
	void USBZAIShieldAttributeSet::StaticRegisterNativesUSBZAIShieldAttributeSet()
	{
		UClass* Class = USBZAIShieldAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetVisorArmor", &USBZAIShieldAttributeSet::execMulticast_SetVisorArmor },
			{ "OnRep_VisorArmor", &USBZAIShieldAttributeSet::execOnRep_VisorArmor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::NewProp_NewCurrentValue = { "NewCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShieldAttributeSet_eventMulticast_SetVisorArmor_Parms, NewCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::NewProp_NewCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShieldAttributeSet, nullptr, "Multicast_SetVisorArmor", nullptr, nullptr, sizeof(SBZAIShieldAttributeSet_eventMulticast_SetVisorArmor_Parms), Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics
	{
		struct SBZAIShieldAttributeSet_eventOnRep_VisorArmor_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShieldAttributeSet_eventOnRep_VisorArmor_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShieldAttributeSet, nullptr, "OnRep_VisorArmor", nullptr, nullptr, sizeof(SBZAIShieldAttributeSet_eventOnRep_VisorArmor_Parms), Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIShieldAttributeSet_NoRegister()
	{
		return USBZAIShieldAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIShieldAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisorArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisorHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldVisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldVisor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAICharacterAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIShieldAttributeSet_Multicast_SetVisorArmor, "Multicast_SetVisorArmor" }, // 2806986764
		{ &Z_Construct_UFunction_USBZAIShieldAttributeSet_OnRep_VisorArmor, "OnRep_VisorArmor" }, // 802248575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIShieldAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorArmor = { "VisorArmor", "OnRep_VisorArmor", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldAttributeSet, VisorArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorHardness = { "VisorHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldAttributeSet, VisorHardness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldHardness = { "ShieldHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldAttributeSet, ShieldHardness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_Shield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldAttributeSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldAttributeSet, Shield), Z_Construct_UClass_USBZAIShield_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldVisor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldAttributeSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShieldAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldVisor = { "ShieldVisor", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShieldAttributeSet, ShieldVisor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldVisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldVisor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_VisorHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::NewProp_ShieldVisor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIShieldAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::ClassParams = {
		&USBZAIShieldAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIShieldAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIShieldAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIShieldAttributeSet, 4261947926);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIShieldAttributeSet>()
	{
		return USBZAIShieldAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIShieldAttributeSet(Z_Construct_UClass_USBZAIShieldAttributeSet, &USBZAIShieldAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIShieldAttributeSet"), false, nullptr, nullptr, nullptr);

	void USBZAIShieldAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_VisorArmor(TEXT("VisorArmor"));

		const bool bIsValid = true
			&& Name_VisorArmor == ClassReps[(int32)ENetFields_Private::VisorArmor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZAIShieldAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIShieldAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
