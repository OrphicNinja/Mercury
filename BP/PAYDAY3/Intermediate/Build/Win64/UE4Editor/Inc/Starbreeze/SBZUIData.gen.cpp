// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZUIData::execGetDifficultyText)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_InDifficulty);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDifficultyText);
		P_GET_UBOOL_REF(Z_Param_Out_bHasText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDifficultyText(ESBZDifficulty(Z_Param_InDifficulty),Z_Param_Out_OutDifficultyText,Z_Param_Out_bHasText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIData::execGetSecurityCompanyData)
	{
		P_GET_ENUM(ESBZSecurityCompany,Z_Param_InSecurityCompany);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UPD3SecurityCompanyDataAsset>*)Z_Param__Result=P_THIS->GetSecurityCompanyData(ESBZSecurityCompany(Z_Param_InSecurityCompany));
		P_NATIVE_END;
	}
	void USBZUIData::StaticRegisterNativesUSBZUIData()
	{
		UClass* Class = USBZUIData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDifficultyText", &USBZUIData::execGetDifficultyText },
			{ "GetSecurityCompanyData", &USBZUIData::execGetSecurityCompanyData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics
	{
		struct SBZUIData_eventGetDifficultyText_Parms
		{
			ESBZDifficulty InDifficulty;
			FText OutDifficultyText;
			bool bHasText;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutDifficultyText;
		static void NewProp_bHasText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIData_eventGetDifficultyText_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_OutDifficultyText = { "OutDifficultyText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIData_eventGetDifficultyText_Parms, OutDifficultyText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_bHasText_SetBit(void* Obj)
	{
		((SBZUIData_eventGetDifficultyText_Parms*)Obj)->bHasText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_bHasText = { "bHasText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIData_eventGetDifficultyText_Parms), &Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_bHasText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_InDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_OutDifficultyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::NewProp_bHasText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIData, nullptr, "GetDifficultyText", nullptr, nullptr, sizeof(SBZUIData_eventGetDifficultyText_Parms), Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIData_GetDifficultyText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIData_GetDifficultyText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics
	{
		struct SBZUIData_eventGetSecurityCompanyData_Parms
		{
			ESBZSecurityCompany InSecurityCompany;
			TSoftObjectPtr<UPD3SecurityCompanyDataAsset> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSecurityCompany_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSecurityCompany;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::NewProp_InSecurityCompany_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::NewProp_InSecurityCompany = { "InSecurityCompany", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIData_eventGetSecurityCompanyData_Parms, InSecurityCompany), Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIData_eventGetSecurityCompanyData_Parms, ReturnValue), Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::NewProp_InSecurityCompany_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::NewProp_InSecurityCompany,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIData, nullptr, "GetSecurityCompanyData", nullptr, nullptr, sizeof(SBZUIData_eventGetSecurityCompanyData_Parms), Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUIData_NoRegister()
	{
		return USBZUIData::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SecurityCompanyDataAssets_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityCompanyDataAssets_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityCompanyDataAssets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanyDataAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SecurityCompanyDataAssets;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DifficultyText_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifficultyText_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DifficultyText_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DifficultyText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUIData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUIData_GetDifficultyText, "GetDifficultyText" }, // 2353659223
		{ &Z_Construct_UFunction_USBZUIData_GetSecurityCompanyData, "GetSecurityCompanyData" }, // 1623145620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_ValueProp = { "SecurityCompanyDataAssets", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPD3SecurityCompanyDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_Key_KeyProp = { "SecurityCompanyDataAssets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIData" },
		{ "ModuleRelativePath", "Public/SBZUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets = { "SecurityCompanyDataAssets", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIData, SecurityCompanyDataAssets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_ValueProp = { "DifficultyText", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_Key_KeyProp = { "DifficultyText_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIData" },
		{ "ModuleRelativePath", "Public/SBZUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText = { "DifficultyText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIData, DifficultyText), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_SecurityCompanyDataAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIData_Statics::NewProp_DifficultyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIData_Statics::ClassParams = {
		&USBZUIData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZUIData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUIData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIData, 3143501938);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIData>()
	{
		return USBZUIData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIData(Z_Construct_UClass_USBZUIData, &USBZUIData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
