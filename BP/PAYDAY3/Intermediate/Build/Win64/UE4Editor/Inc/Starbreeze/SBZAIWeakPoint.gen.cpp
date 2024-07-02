// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIWeakPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIWeakPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPointAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeakpointHideInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIWeakPoint::execMulticast_OnWeakPointDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnWeakPointDestroyed_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed = FName(TEXT("Multicast_OnWeakPointDestroyed"));
	void USBZAIWeakPoint::Multicast_OnWeakPointDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed),NULL);
	}
	void USBZAIWeakPoint::StaticRegisterNativesUSBZAIWeakPoint()
	{
		UClass* Class = USBZAIWeakPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnWeakPointDestroyed", &USBZAIWeakPoint::execMulticast_OnWeakPointDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIWeakPoint, nullptr, "Multicast_OnWeakPointDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIWeakPoint_NoRegister()
	{
		return USBZAIWeakPoint::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIWeakPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPointHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeakPointHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPointAttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeakPointAttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedInstigator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeakPointType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeakPointType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HideInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HideInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIWeakPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIWeakPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIWeakPoint_Multicast_OnWeakPointDestroyed, "Multicast_OnWeakPointDestroyed" }, // 2071178844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZAIWeakPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointHealth = { "WeakPointHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(WeakPointHealth, USBZAIWeakPoint), STRUCT_OFFSET(USBZAIWeakPoint, WeakPointHealth), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEffect = { "DestroyedEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPoint, DestroyedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEvent = { "DestroyedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPoint, DestroyedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointAttributeSet = { "WeakPointAttributeSet", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPoint, WeakPointAttributeSet), Z_Construct_UClass_USBZAIWeakPointAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointAttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointAttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedInstigator = { "DestroyedInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPoint, DestroyedInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedInstigator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType = { "WeakPointType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPoint, WeakPointType), Z_Construct_UEnum_Starbreeze_ESBZAIWeakPointType, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo_Inner = { "HideInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeakpointHideInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo = { "HideInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeakPoint, HideInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIWeakPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointAttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_DestroyedInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_WeakPointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeakPoint_Statics::NewProp_HideInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIWeakPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIWeakPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIWeakPoint_Statics::ClassParams = {
		&USBZAIWeakPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIWeakPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::PropPointers),
		0,
		0x00A010A5u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIWeakPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeakPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIWeakPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIWeakPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIWeakPoint, 1771739072);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIWeakPoint>()
	{
		return USBZAIWeakPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIWeakPoint(Z_Construct_UClass_USBZAIWeakPoint, &USBZAIWeakPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIWeakPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIWeakPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
