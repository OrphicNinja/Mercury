// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractableBagItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractableBagItem() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAttractableBagItem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAttractableBagItem();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAttractableBagItem::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAttractableBagItem::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ASBZAttractableBagItem::StaticRegisterNativesASBZAttractableBagItem()
	{
		UClass* Class = ASBZAttractableBagItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttractorInstigator", &ASBZAttractableBagItem::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZAttractableBagItem::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics
	{
		struct SBZAttractableBagItem_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAttractableBagItem_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAttractableBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAttractableBagItem, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZAttractableBagItem_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics
	{
		struct SBZAttractableBagItem_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZAttractableBagItem_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAttractableBagItem_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAttractableBagItem_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAttractableBagItem_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZAttractableBagItem.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAttractableBagItem, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZAttractableBagItem_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAttractableBagItem_NoRegister()
	{
		return ASBZAttractableBagItem::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAttractableBagItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAttractableBagItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBagItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAttractableBagItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAttractableBagItem_SetAttractorInstigator, "SetAttractorInstigator" }, // 3246469605
		{ &Z_Construct_UFunction_ASBZAttractableBagItem_SetEnabled, "SetEnabled" }, // 1172129761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAttractableBagItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractableBagItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractableBagItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractableBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractableBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAttractableBagItem, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_AttractorComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractableBagItem" },
		{ "ModuleRelativePath", "Public/SBZAttractableBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAttractableBagItem, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAttractableBagItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAttractableBagItem_Statics::NewProp_RoomVolumes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAttractableBagItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAttractableBagItem, ISBZAIActionInteractableInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAttractableBagItem, IAISightTargetInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAttractableBagItem, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAttractableBagItem, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAttractableBagItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAttractableBagItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAttractableBagItem_Statics::ClassParams = {
		&ASBZAttractableBagItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAttractableBagItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAttractableBagItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAttractableBagItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAttractableBagItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAttractableBagItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAttractableBagItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAttractableBagItem, 1570272544);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAttractableBagItem>()
	{
		return ASBZAttractableBagItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAttractableBagItem(Z_Construct_UClass_ASBZAttractableBagItem, &ASBZAttractableBagItem::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAttractableBagItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAttractableBagItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
