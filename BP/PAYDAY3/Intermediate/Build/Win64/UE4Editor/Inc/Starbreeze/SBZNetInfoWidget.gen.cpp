// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNetInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNetInfoWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNetInfoWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNetInfoWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZNetInfoWidget_BP_OnServerRegionChanged = FName(TEXT("BP_OnServerRegionChanged"));
	void USBZNetInfoWidget::BP_OnServerRegionChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZNetInfoWidget_BP_OnServerRegionChanged),NULL);
	}
	static FName NAME_USBZNetInfoWidget_BP_OnValidPlayerState = FName(TEXT("BP_OnValidPlayerState"));
	void USBZNetInfoWidget::BP_OnValidPlayerState()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZNetInfoWidget_BP_OnValidPlayerState),NULL);
	}
	void USBZNetInfoWidget::StaticRegisterNativesUSBZNetInfoWidget()
	{
	}
	struct Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNetInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNetInfoWidget, nullptr, "BP_OnServerRegionChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNetInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNetInfoWidget, nullptr, "BP_OnValidPlayerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZNetInfoWidget_NoRegister()
	{
		return USBZNetInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZNetInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ServerRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNetInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPingWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZNetInfoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZNetInfoWidget_BP_OnServerRegionChanged, "BP_OnServerRegionChanged" }, // 2670542264
		{ &Z_Construct_UFunction_USBZNetInfoWidget_BP_OnValidPlayerState, "BP_OnValidPlayerState" }, // 4139668246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNetInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNetInfoWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNetInfoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNetInfoWidget_Statics::NewProp_ServerRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNetInfoWidget" },
		{ "ModuleRelativePath", "Public/SBZNetInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZNetInfoWidget_Statics::NewProp_ServerRegion = { "ServerRegion", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNetInfoWidget, ServerRegion), METADATA_PARAMS(Z_Construct_UClass_USBZNetInfoWidget_Statics::NewProp_ServerRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNetInfoWidget_Statics::NewProp_ServerRegion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNetInfoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNetInfoWidget_Statics::NewProp_ServerRegion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNetInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNetInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNetInfoWidget_Statics::ClassParams = {
		&USBZNetInfoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZNetInfoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNetInfoWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNetInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNetInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNetInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNetInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNetInfoWidget, 1006067459);
	template<> STARBREEZE_API UClass* StaticClass<USBZNetInfoWidget>()
	{
		return USBZNetInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNetInfoWidget(Z_Construct_UClass_USBZNetInfoWidget, &USBZNetInfoWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNetInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNetInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
