// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSubtitleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSubtitleWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSubtitleWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSubtitleWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSubtitleWidget::execHandlePlayerControllerInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerControllerInitialized();
		P_NATIVE_END;
	}
	void USBZSubtitleWidget::StaticRegisterNativesUSBZSubtitleWidget()
	{
		UClass* Class = USBZSubtitleWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerControllerInitialized", &USBZSubtitleWidget::execHandlePlayerControllerInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSubtitleWidget, nullptr, "HandlePlayerControllerInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSubtitleWidget_NoRegister()
	{
		return USBZSubtitleWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZSubtitleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTimePerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTimePerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSettingsPreview_MetaData[];
#endif
		static void NewProp_bSettingsPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSettingsPreview;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTimePerCharacterMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayTimePerCharacterMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTimePerCharacterMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DisplayTimePerCharacterMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VOStringTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VOStringTableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_SubtitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_SubtitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleStringTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleStringTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSubtitleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSubtitleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSubtitleWidget_HandlePlayerControllerInitialized, "HandlePlayerControllerInitialized" }, // 216344953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSubtitleWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_MinDisplayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_MinDisplayTime = { "MinDisplayTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, MinDisplayTime), METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_MinDisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_MinDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacter = { "DisplayTimePerCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, DisplayTimePerCharacter), METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview_SetBit(void* Obj)
	{
		((USBZSubtitleWidget*)Obj)->bSettingsPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview = { "bSettingsPreview", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSubtitleWidget), &Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_ValueProp = { "DisplayTimePerCharacterMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_Key_KeyProp = { "DisplayTimePerCharacterMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap = { "DisplayTimePerCharacterMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, DisplayTimePerCharacterMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_StringTableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_StringTableName = { "StringTableName", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, StringTableName), METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_StringTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_StringTableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_VOStringTableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_VOStringTableName = { "VOStringTableName", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, VOStringTableName), METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_VOStringTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_VOStringTableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_Text_SubtitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_Text_SubtitleText = { "Text_SubtitleText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, Text_SubtitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_Text_SubtitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_Text_SubtitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_SubtitleStringTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSubtitleWidget" },
		{ "ModuleRelativePath", "Public/SBZSubtitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_SubtitleStringTable = { "SubtitleStringTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSubtitleWidget, SubtitleStringTable), Z_Construct_UClass_UStringTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_SubtitleStringTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_SubtitleStringTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSubtitleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_MinDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_bSettingsPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_DisplayTimePerCharacterMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_StringTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_VOStringTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_Text_SubtitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSubtitleWidget_Statics::NewProp_SubtitleStringTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSubtitleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSubtitleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSubtitleWidget_Statics::ClassParams = {
		&USBZSubtitleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSubtitleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSubtitleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSubtitleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSubtitleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSubtitleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSubtitleWidget, 58479213);
	template<> STARBREEZE_API UClass* StaticClass<USBZSubtitleWidget>()
	{
		return USBZSubtitleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSubtitleWidget(Z_Construct_UClass_USBZSubtitleWidget, &USBZSubtitleWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSubtitleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSubtitleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
