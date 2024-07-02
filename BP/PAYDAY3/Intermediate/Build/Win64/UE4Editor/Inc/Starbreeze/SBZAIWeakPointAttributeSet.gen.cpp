// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIWeakPointAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIWeakPointAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPointAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPointAttributeSet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIWeakPointAttributeSet::execMulticast_SetWeakPointHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetWeakPointHealth_Implementation(Z_Param_NewCurrentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIWeakPointAttributeSet::execOnRep_WeakPointHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WeakPointHealth(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	static FName NAME_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth = FName(TEXT("Multicast_SetWeakPointHealth"));
	void USBZAIWeakPointAttributeSet::Multicast_SetWeakPointHealth(float NewCurrentValue)
	{
		SBZAIWeakPointAttributeSet_eventMulticast_SetWeakPointHealth_Parms Parms;
		Parms.NewCurrentValue=NewCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth),&Parms);
	}
	void USBZAIWeakPointAttributeSet::StaticRegisterNativesUSBZAIWeakPointAttributeSet()
	{
		UClass* Class = USBZAIWeakPointAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetWeakPointHealth", &USBZAIWeakPointAttributeSet::execMulticast_SetWeakPointHealth },
			{ "OnRep_WeakPointHealth", &USBZAIWeakPointAttributeSet::execOnRep_WeakPointHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::NewProp_NewCurrentValue = { "NewCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIWeakPointAttributeSet_eventMulticast_SetWeakPointHealth_Parms, NewCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::NewProp_NewCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIWeakPointAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIWeakPointAttributeSet, nullptr, "Multicast_SetWeakPointHealth", nullptr, nullptr, sizeof(SBZAIWeakPointAttributeSet_eventMulticast_SetWeakPointHealth_Parms), Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics
	{
		struct SBZAIWeakPointAttributeSet_eventOnRep_WeakPointHealth_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIWeakPointAttributeSet_eventOnRep_WeakPointHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIWeakPointAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIWeakPointAttributeSet, nullptr, "OnRep_WeakPointHealth", nullptr, nullptr, sizeof(SBZAIWeakPointAttributeSet_eventOnRep_WeakPointHealth_Parms), Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIWeakPointAttributeSet_NoRegister()
	{
		return USBZAIWeakPointAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPointHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeakPointHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeakPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAICharacterAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIWeakPointAttributeSet_Multicast_SetWeakPointHealth, "Multicast_SetWeakPointHealth" }, // 1276837492
		{ &Z_Construct_UFunction_USBZAIWeakPointAttributeSet_OnRep_WeakPointHealth, "OnRep_WeakPointHealth" }, // 1485958096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIWeakPointAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPointAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPointHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPointAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPointAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPointHealth = { "WeakPointHealth", "OnRep_WeakPointHealth", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPointAttributeSet, WeakPointHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPointHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPointHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPointAttributeSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPointAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPoint = { "WeakPoint", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPointAttributeSet, WeakPoint), Z_Construct_UClass_USBZAIWeakPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_Instigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPointAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPointAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPointAttributeSet, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_Instigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPointHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_WeakPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::NewProp_Instigator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIWeakPointAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::ClassParams = {
		&USBZAIWeakPointAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIWeakPointAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIWeakPointAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIWeakPointAttributeSet, 3854176013);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIWeakPointAttributeSet>()
	{
		return USBZAIWeakPointAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIWeakPointAttributeSet(Z_Construct_UClass_USBZAIWeakPointAttributeSet, &USBZAIWeakPointAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIWeakPointAttributeSet"), false, nullptr, nullptr, nullptr);

	void USBZAIWeakPointAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WeakPointHealth(TEXT("WeakPointHealth"));

		const bool bIsValid = true
			&& Name_WeakPointHealth == ClassReps[(int32)ENetFields_Private::WeakPointHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZAIWeakPointAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIWeakPointAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
