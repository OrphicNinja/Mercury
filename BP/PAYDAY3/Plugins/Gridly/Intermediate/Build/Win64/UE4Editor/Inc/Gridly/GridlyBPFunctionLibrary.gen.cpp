// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/GridlyBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridlyBPFunctionLibrary() {}
// Cross Module References
	GRIDLY_API UClass* Z_Construct_UClass_UGridlyBPFunctionLibrary_NoRegister();
	GRIDLY_API UClass* Z_Construct_UClass_UGridlyBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Gridly();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
// End Cross Module References
	DEFINE_FUNCTION(UGridlyBPFunctionLibrary::execEnableLocalizationPreview)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGridlyBPFunctionLibrary::EnableLocalizationPreview(Z_Param_Culture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridlyBPFunctionLibrary::execGetLocalizationPreviewCulture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGridlyBPFunctionLibrary::GetLocalizationPreviewCulture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridlyBPFunctionLibrary::execUpdateLocalizationPreview)
	{
		P_GET_TARRAY_REF(FPolyglotTextData,Z_Param_Out_PolyglotTextDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGridlyBPFunctionLibrary::UpdateLocalizationPreview(Z_Param_Out_PolyglotTextDatas);
		P_NATIVE_END;
	}
	void UGridlyBPFunctionLibrary::StaticRegisterNativesUGridlyBPFunctionLibrary()
	{
		UClass* Class = UGridlyBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableLocalizationPreview", &UGridlyBPFunctionLibrary::execEnableLocalizationPreview },
			{ "GetLocalizationPreviewCulture", &UGridlyBPFunctionLibrary::execGetLocalizationPreviewCulture },
			{ "UpdateLocalizationPreview", &UGridlyBPFunctionLibrary::execUpdateLocalizationPreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics
	{
		struct GridlyBPFunctionLibrary_eventEnableLocalizationPreview_Parms
		{
			FString Culture;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridlyBPFunctionLibrary_eventEnableLocalizationPreview_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridlyBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridlyBPFunctionLibrary, nullptr, "EnableLocalizationPreview", nullptr, nullptr, sizeof(GridlyBPFunctionLibrary_eventEnableLocalizationPreview_Parms), Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics
	{
		struct GridlyBPFunctionLibrary_eventGetLocalizationPreviewCulture_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridlyBPFunctionLibrary_eventGetLocalizationPreviewCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridlyBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridlyBPFunctionLibrary, nullptr, "GetLocalizationPreviewCulture", nullptr, nullptr, sizeof(GridlyBPFunctionLibrary_eventGetLocalizationPreviewCulture_Parms), Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics
	{
		struct FPolyglotTextData
		{
			ELocalizedTextSourceCategory Category;
			FString NativeCulture;
			FString Namespace;
			FString Key;
			FString NativeString;
			TMap<FString,FString> LocalizedStrings;
			bool bIsMinimalPatch;
			FText CachedText;
		};

		struct GridlyBPFunctionLibrary_eventUpdateLocalizationPreview_Parms
		{
			TArray<FPolyglotTextData> PolyglotTextDatas;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolyglotTextDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyglotTextDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolyglotTextDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas_Inner = { "PolyglotTextDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas = { "PolyglotTextDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridlyBPFunctionLibrary_eventUpdateLocalizationPreview_Parms, PolyglotTextDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::NewProp_PolyglotTextDatas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridlyBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridlyBPFunctionLibrary, nullptr, "UpdateLocalizationPreview", nullptr, nullptr, sizeof(GridlyBPFunctionLibrary_eventUpdateLocalizationPreview_Parms), Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridlyBPFunctionLibrary_NoRegister()
	{
		return UGridlyBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridlyBPFunctionLibrary_EnableLocalizationPreview, "EnableLocalizationPreview" }, // 237387442
		{ &Z_Construct_UFunction_UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture, "GetLocalizationPreviewCulture" }, // 138382248
		{ &Z_Construct_UFunction_UGridlyBPFunctionLibrary_UpdateLocalizationPreview, "UpdateLocalizationPreview" }, // 2713446320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GridlyBPFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridlyBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridlyBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::ClassParams = {
		&UGridlyBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridlyBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridlyBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridlyBPFunctionLibrary, 1045888189);
	template<> GRIDLY_API UClass* StaticClass<UGridlyBPFunctionLibrary>()
	{
		return UGridlyBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridlyBPFunctionLibrary(Z_Construct_UClass_UGridlyBPFunctionLibrary, &UGridlyBPFunctionLibrary::StaticClass, TEXT("/Script/Gridly"), TEXT("UGridlyBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridlyBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
