// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPhoneTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPhoneTool() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPhoneTool_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPhoneTool();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTool();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPhoneTool::execMulticast_ToggleScreenMode)
	{
		P_GET_ENUM(ESBZPhoneScreenState,Z_Param_NewScreenState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState(Z_Param_NewScreenState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZPhoneTool_Multicast_ToggleScreenMode = FName(TEXT("Multicast_ToggleScreenMode"));
	void ASBZPhoneTool::Multicast_ToggleScreenMode(ESBZPhoneScreenState NewScreenState)
	{
		SBZPhoneTool_eventMulticast_ToggleScreenMode_Parms Parms;
		Parms.NewScreenState=NewScreenState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPhoneTool_Multicast_ToggleScreenMode),&Parms);
	}
	void ASBZPhoneTool::StaticRegisterNativesASBZPhoneTool()
	{
		UClass* Class = ASBZPhoneTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ToggleScreenMode", &ASBZPhoneTool::execMulticast_ToggleScreenMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewScreenState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewScreenState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::NewProp_NewScreenState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::NewProp_NewScreenState = { "NewScreenState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPhoneTool_eventMulticast_ToggleScreenMode_Parms, NewScreenState), Z_Construct_UEnum_Starbreeze_ESBZPhoneScreenState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::NewProp_NewScreenState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::NewProp_NewScreenState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPhoneTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPhoneTool, nullptr, "Multicast_ToggleScreenMode", nullptr, nullptr, sizeof(SBZPhoneTool_eventMulticast_ToggleScreenMode_Parms), Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPhoneTool_NoRegister()
	{
		return ASBZPhoneTool::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPhoneTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniGameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlowMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPhoneTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZTool,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPhoneTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPhoneTool_Multicast_ToggleScreenMode, "Multicast_ToggleScreenMode" }, // 2987579238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhoneTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPhoneTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPhoneTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneTool" },
		{ "ModuleRelativePath", "Public/SBZPhoneTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPhoneTool, WidgetComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_MiniGameWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneTool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPhoneTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_MiniGameWidget = { "MiniGameWidget", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPhoneTool, MiniGameWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_MiniGameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_MiniGameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_GlowMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneTool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPhoneTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_GlowMesh = { "GlowMesh", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPhoneTool, GlowMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_GlowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_GlowMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPhoneTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_MiniGameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhoneTool_Statics::NewProp_GlowMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZPhoneTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPhoneTool, ISBZViewTargetCollectionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPhoneTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPhoneTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPhoneTool_Statics::ClassParams = {
		&ASBZPhoneTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPhoneTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhoneTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPhoneTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhoneTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPhoneTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPhoneTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPhoneTool, 346937870);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPhoneTool>()
	{
		return ASBZPhoneTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPhoneTool(Z_Construct_UClass_ASBZPhoneTool, &ASBZPhoneTool::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPhoneTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPhoneTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
