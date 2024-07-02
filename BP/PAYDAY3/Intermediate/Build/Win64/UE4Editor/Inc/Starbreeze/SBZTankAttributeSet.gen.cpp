// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTankAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTankAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTankAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTankAttributeSet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTankAIComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USBZTankAttributeSet::execMulticast_SetVisorArmor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetVisorArmor_Implementation(Z_Param_NewCurrentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTankAttributeSet::execOnRep_VisorArmor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VisorArmor(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	static FName NAME_USBZTankAttributeSet_Multicast_SetVisorArmor = FName(TEXT("Multicast_SetVisorArmor"));
	void USBZTankAttributeSet::Multicast_SetVisorArmor(float NewCurrentValue)
	{
		SBZTankAttributeSet_eventMulticast_SetVisorArmor_Parms Parms;
		Parms.NewCurrentValue=NewCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZTankAttributeSet_Multicast_SetVisorArmor),&Parms);
	}
	void USBZTankAttributeSet::StaticRegisterNativesUSBZTankAttributeSet()
	{
		UClass* Class = USBZTankAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetVisorArmor", &USBZTankAttributeSet::execMulticast_SetVisorArmor },
			{ "OnRep_VisorArmor", &USBZTankAttributeSet::execOnRep_VisorArmor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::NewProp_NewCurrentValue = { "NewCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTankAttributeSet_eventMulticast_SetVisorArmor_Parms, NewCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::NewProp_NewCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTankAttributeSet, nullptr, "Multicast_SetVisorArmor", nullptr, nullptr, sizeof(SBZTankAttributeSet_eventMulticast_SetVisorArmor_Parms), Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics
	{
		struct SBZTankAttributeSet_eventOnRep_VisorArmor_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTankAttributeSet_eventOnRep_VisorArmor_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTankAttributeSet, nullptr, "OnRep_VisorArmor", nullptr, nullptr, sizeof(SBZTankAttributeSet_eventOnRep_VisorArmor_Parms), Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTankAttributeSet_NoRegister()
	{
		return USBZTankAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZTankAttributeSet_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorArmorMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisorArmorMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorArmorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisorArmorHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorDamageTypeMultipliers_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorDamageTypeMultipliers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDamageTypeMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ArmorDamageTypeMultipliers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTankAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAICharacterAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTankAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTankAttributeSet_Multicast_SetVisorArmor, "Multicast_SetVisorArmor" }, // 1011522825
		{ &Z_Construct_UFunction_USBZTankAttributeSet_OnRep_VisorArmor, "OnRep_VisorArmor" }, // 1707683908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTankAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmor = { "VisorArmor", "OnRep_VisorArmor", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAttributeSet, VisorArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorMax = { "VisorArmorMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAttributeSet, VisorArmorMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorHardness = { "VisorArmorHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAttributeSet, VisorArmorHardness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_TankComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAttributeSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_TankComponent = { "TankComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAttributeSet, TankComponent), Z_Construct_UClass_USBZTankAIComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_TankComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_TankComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_ValueProp = { "ArmorDamageTypeMultipliers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_Key_KeyProp = { "ArmorDamageTypeMultipliers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZTankAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers = { "ArmorDamageTypeMultipliers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAttributeSet, ArmorDamageTypeMultipliers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTankAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_VisorArmorHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_TankComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAttributeSet_Statics::NewProp_ArmorDamageTypeMultipliers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTankAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTankAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTankAttributeSet_Statics::ClassParams = {
		&USBZTankAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZTankAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTankAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTankAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTankAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTankAttributeSet, 1268356067);
	template<> STARBREEZE_API UClass* StaticClass<USBZTankAttributeSet>()
	{
		return USBZTankAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTankAttributeSet(Z_Construct_UClass_USBZTankAttributeSet, &USBZTankAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTankAttributeSet"), false, nullptr, nullptr, nullptr);

	void USBZTankAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_VisorArmor(TEXT("VisorArmor"));

		const bool bIsValid = true
			&& Name_VisorArmor == ClassReps[(int32)ENetFields_Private::VisorArmor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZTankAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTankAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
