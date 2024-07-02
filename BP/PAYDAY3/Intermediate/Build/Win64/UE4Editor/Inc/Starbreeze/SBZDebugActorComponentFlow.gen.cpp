// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugActorComponentFlow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugActorComponentFlow() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugActorComponentFlow_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugActorComponentFlow();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugObjectFlow_NoRegister();
// End Cross Module References
	void USBZDebugActorComponentFlow::StaticRegisterNativesUSBZDebugActorComponentFlow()
	{
	}
	UClass* Z_Construct_UClass_USBZDebugActorComponentFlow_NoRegister()
	{
		return USBZDebugActorComponentFlow::StaticClass();
	}
	struct Z_Construct_UClass_USBZDebugActorComponentFlow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIs_MetaData[];
#endif
		static void NewProp_bIs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDuplicateTransient_MetaData[];
#endif
		static void NewProp_bIsDuplicateTransient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDuplicateTransient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstanceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastInstanceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDynamicObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastDynamicObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZDebugActorComponentFlow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	void Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs_SetBit(void* Obj)
	{
		((USBZDebugActorComponentFlow*)Obj)->bIs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs = { "bIs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDebugActorComponentFlow), &Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	void Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient_SetBit(void* Obj)
	{
		((USBZDebugActorComponentFlow*)Obj)->bIsDuplicateTransient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient = { "bIsDuplicateTransient", nullptr, (EPropertyFlags)0x0020080000200005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDebugActorComponentFlow), &Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugActorComponentFlow, Object), Z_Construct_UClass_USBZDebugObjectFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastObject = { "LastObject", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugActorComponentFlow, LastObject), Z_Construct_UClass_USBZDebugObjectFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_InstanceObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_InstanceObject = { "InstanceObject", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugActorComponentFlow, InstanceObject), Z_Construct_UClass_USBZDebugObjectFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_InstanceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_InstanceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastInstanceObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastInstanceObject = { "LastInstanceObject", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugActorComponentFlow, LastInstanceObject), Z_Construct_UClass_USBZDebugObjectFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastInstanceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastInstanceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_DynamicObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_DynamicObject = { "DynamicObject", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugActorComponentFlow, DynamicObject), Z_Construct_UClass_USBZDebugObjectFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_DynamicObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_DynamicObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastDynamicObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugActorComponentFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugActorComponentFlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastDynamicObject = { "LastDynamicObject", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugActorComponentFlow, LastDynamicObject), Z_Construct_UClass_USBZDebugObjectFlow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastDynamicObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastDynamicObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_bIsDuplicateTransient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_InstanceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastInstanceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_DynamicObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::NewProp_LastDynamicObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDebugActorComponentFlow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::ClassParams = {
		&USBZDebugActorComponentFlow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDebugActorComponentFlow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDebugActorComponentFlow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDebugActorComponentFlow, 2793831892);
	template<> STARBREEZE_API UClass* StaticClass<USBZDebugActorComponentFlow>()
	{
		return USBZDebugActorComponentFlow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDebugActorComponentFlow(Z_Construct_UClass_USBZDebugActorComponentFlow, &USBZDebugActorComponentFlow::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDebugActorComponentFlow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDebugActorComponentFlow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
