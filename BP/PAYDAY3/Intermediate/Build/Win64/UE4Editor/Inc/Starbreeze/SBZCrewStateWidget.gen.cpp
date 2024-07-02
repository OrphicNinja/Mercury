// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCrewStateWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCrewStateWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrewStateWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrewStateWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCrewStateWidget::execIsForLocalPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsForLocalPlayerState();
		P_NATIVE_END;
	}
	void USBZCrewStateWidget::StaticRegisterNativesUSBZCrewStateWidget()
	{
		UClass* Class = USBZCrewStateWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsForLocalPlayerState", &USBZCrewStateWidget::execIsForLocalPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics
	{
		struct SBZCrewStateWidget_eventIsForLocalPlayerState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCrewStateWidget_eventIsForLocalPlayerState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCrewStateWidget_eventIsForLocalPlayerState_Parms), &Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCrewStateWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCrewStateWidget, nullptr, "IsForLocalPlayerState", nullptr, nullptr, sizeof(SBZCrewStateWidget_eventIsForLocalPlayerState_Parms), Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCrewStateWidget_NoRegister()
	{
		return USBZCrewStateWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCrewStateWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewStateActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrewStateActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCrewStateWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCrewStateWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCrewStateWidget_IsForLocalPlayerState, "IsForLocalPlayerState" }, // 2268422899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCrewStateWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCrewStateWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCrewStateWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCrewStateWidget_Statics::NewProp_CrewStateActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrewStateWidget" },
		{ "ModuleRelativePath", "Public/SBZCrewStateWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCrewStateWidget_Statics::NewProp_CrewStateActor = { "CrewStateActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCrewStateWidget, CrewStateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCrewStateWidget_Statics::NewProp_CrewStateActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrewStateWidget_Statics::NewProp_CrewStateActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCrewStateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCrewStateWidget_Statics::NewProp_CrewStateActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCrewStateWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCrewStateWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCrewStateWidget_Statics::ClassParams = {
		&USBZCrewStateWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCrewStateWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrewStateWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCrewStateWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrewStateWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCrewStateWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCrewStateWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCrewStateWidget, 3639372529);
	template<> STARBREEZE_API UClass* StaticClass<USBZCrewStateWidget>()
	{
		return USBZCrewStateWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCrewStateWidget(Z_Construct_UClass_USBZCrewStateWidget, &USBZCrewStateWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCrewStateWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCrewStateWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
