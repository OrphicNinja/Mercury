// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLateReverbComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLateReverbComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkLateReverbComponent::execAssociateAkTextureSetComponent)
	{
		P_GET_OBJECT(UAkAcousticTextureSetComponent,Z_Param_textureSetComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssociateAkTextureSetComponent(Z_Param_textureSetComponent);
		P_NATIVE_END;
	}
	void UAkLateReverbComponent::StaticRegisterNativesUAkLateReverbComponent()
	{
		UClass* Class = UAkLateReverbComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateAkTextureSetComponent", &UAkLateReverbComponent::execAssociateAkTextureSetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics
	{
		struct AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms
		{
			UAkAcousticTextureSetComponent* textureSetComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textureSetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textureSetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent = { "textureSetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms, textureSetComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkLateReverbComponent, nullptr, "AssociateAkTextureSetComponent", nullptr, nullptr, sizeof(AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms), Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkLateReverbComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAssignAuxBus_MetaData[];
#endif
		static void NewProp_AutoAssignAuxBus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoAssignAuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusManual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBusManual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLateReverbComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkLateReverbComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent, "AssociateAkTextureSetComponent" }, // 2926761550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkLateReverbComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkLateReverbComponent), &Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLateReverbComponent, SendLevel), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLateReverbComponent, FadeRate), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLateReverbComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->AutoAssignAuxBus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus = { "AutoAssignAuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkLateReverbComponent), &Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLateReverbComponent, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual = { "AuxBusManual", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusManual), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLateReverbComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLateReverbComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkLateReverbComponent_Statics::ClassParams = {
		&UAkLateReverbComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLateReverbComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkLateReverbComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLateReverbComponent, 3979658358);
	template<> AKAUDIO_API UClass* StaticClass<UAkLateReverbComponent>()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLateReverbComponent(Z_Construct_UClass_UAkLateReverbComponent, &UAkLateReverbComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLateReverbComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLateReverbComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
