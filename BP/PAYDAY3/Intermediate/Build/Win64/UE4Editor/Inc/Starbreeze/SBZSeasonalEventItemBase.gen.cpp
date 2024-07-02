// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSeasonalEventItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSeasonalEventItemBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPowerUp();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEffectChanceData();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSeasonalEventItemBase::execMulticast_OnItemPickedUp)
	{
		P_GET_UBOOL(Z_Param_bIsPositiveEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnItemPickedUp_Implementation(Z_Param_bIsPositiveEffect);
		P_NATIVE_END;
	}
	static FName NAME_ASBZSeasonalEventItemBase_BP_OnItemPickedUp = FName(TEXT("BP_OnItemPickedUp"));
	void ASBZSeasonalEventItemBase::BP_OnItemPickedUp(bool bIsPositiveEffect)
	{
		SBZSeasonalEventItemBase_eventBP_OnItemPickedUp_Parms Parms;
		Parms.bIsPositiveEffect=bIsPositiveEffect ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSeasonalEventItemBase_BP_OnItemPickedUp),&Parms);
	}
	static FName NAME_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp = FName(TEXT("Multicast_OnItemPickedUp"));
	void ASBZSeasonalEventItemBase::Multicast_OnItemPickedUp(bool bIsPositiveEffect)
	{
		SBZSeasonalEventItemBase_eventMulticast_OnItemPickedUp_Parms Parms;
		Parms.bIsPositiveEffect=bIsPositiveEffect ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp),&Parms);
	}
	void ASBZSeasonalEventItemBase::StaticRegisterNativesASBZSeasonalEventItemBase()
	{
		UClass* Class = ASBZSeasonalEventItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnItemPickedUp", &ASBZSeasonalEventItemBase::execMulticast_OnItemPickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics
	{
		static void NewProp_bIsPositiveEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPositiveEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect_SetBit(void* Obj)
	{
		((SBZSeasonalEventItemBase_eventBP_OnItemPickedUp_Parms*)Obj)->bIsPositiveEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect = { "bIsPositiveEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSeasonalEventItemBase_eventBP_OnItemPickedUp_Parms), &Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSeasonalEventItemBase, nullptr, "BP_OnItemPickedUp", nullptr, nullptr, sizeof(SBZSeasonalEventItemBase_eventBP_OnItemPickedUp_Parms), Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics
	{
		static void NewProp_bIsPositiveEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPositiveEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect_SetBit(void* Obj)
	{
		((SBZSeasonalEventItemBase_eventMulticast_OnItemPickedUp_Parms*)Obj)->bIsPositiveEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect = { "bIsPositiveEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSeasonalEventItemBase_eventMulticast_OnItemPickedUp_Parms), &Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::NewProp_bIsPositiveEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSeasonalEventItemBase, nullptr, "Multicast_OnItemPickedUp", nullptr, nullptr, sizeof(SBZSeasonalEventItemBase_eventMulticast_OnItemPickedUp_Parms), Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSeasonalEventItemBase_NoRegister()
	{
		return ASBZSeasonalEventItemBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectChanceDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectChanceDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectChanceDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthGained_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthGained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorChunksToGrant_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArmorChunksToGrant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfMagazines_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberOfMagazines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfGrenades_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberOfGrenades;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPowerUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSeasonalEventItemBase_BP_OnItemPickedUp, "BP_OnItemPickedUp" }, // 526669883
		{ &Z_Construct_UFunction_ASBZSeasonalEventItemBase_Multicast_OnItemPickedUp, "Multicast_OnItemPickedUp" }, // 606645331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSeasonalEventItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray_Inner = { "EffectChanceDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEffectChanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemBase" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray = { "EffectChanceDataArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemBase, EffectChanceDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_HealthGained_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemBase" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_HealthGained = { "HealthGained", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemBase, HealthGained), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_HealthGained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_HealthGained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_ArmorChunksToGrant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemBase" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_ArmorChunksToGrant = { "ArmorChunksToGrant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemBase, ArmorChunksToGrant), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_ArmorChunksToGrant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_ArmorChunksToGrant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfMagazines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemBase" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfMagazines = { "NumberOfMagazines", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemBase, NumberOfMagazines), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfMagazines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfMagazines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfGrenades_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemBase" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfGrenades = { "NumberOfGrenades", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemBase, NumberOfGrenades), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfGrenades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfGrenades_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_EffectChanceDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_HealthGained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_ArmorChunksToGrant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfMagazines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::NewProp_NumberOfGrenades,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSeasonalEventItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::ClassParams = {
		&ASBZSeasonalEventItemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSeasonalEventItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSeasonalEventItemBase, 3185567064);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSeasonalEventItemBase>()
	{
		return ASBZSeasonalEventItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSeasonalEventItemBase(Z_Construct_UClass_ASBZSeasonalEventItemBase, &ASBZSeasonalEventItemBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSeasonalEventItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSeasonalEventItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
