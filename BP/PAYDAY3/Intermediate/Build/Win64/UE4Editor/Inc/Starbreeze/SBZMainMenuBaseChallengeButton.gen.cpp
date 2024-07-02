// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuBaseChallengeButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuBaseChallengeButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuBaseChallengeButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuBaseChallengeButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuBaseChallengeButton::execGetPaperSpriteSourceSize)
	{
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USBZMainMenuBaseChallengeButton::GetPaperSpriteSourceSize(Z_Param_Sprite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuBaseChallengeButton::execInitializeChallengeData)
	{
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_InChallengeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeChallengeData(Z_Param_Out_InChallengeData);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized = FName(TEXT("OnChallengeDataInititalized"));
	void USBZMainMenuBaseChallengeButton::OnChallengeDataInititalized(FSBZChallengeData const& InChallengeData)
	{
		SBZMainMenuBaseChallengeButton_eventOnChallengeDataInititalized_Parms Parms;
		Parms.InChallengeData=InChallengeData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized),&Parms);
	}
	void USBZMainMenuBaseChallengeButton::StaticRegisterNativesUSBZMainMenuBaseChallengeButton()
	{
		UClass* Class = USBZMainMenuBaseChallengeButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPaperSpriteSourceSize", &USBZMainMenuBaseChallengeButton::execGetPaperSpriteSourceSize },
			{ "InitializeChallengeData", &USBZMainMenuBaseChallengeButton::execInitializeChallengeData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics
	{
		struct SBZMainMenuBaseChallengeButton_eventGetPaperSpriteSourceSize_Parms
		{
			UPaperSprite* Sprite;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuBaseChallengeButton_eventGetPaperSpriteSourceSize_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuBaseChallengeButton_eventGetPaperSpriteSourceSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::NewProp_Sprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuBaseChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuBaseChallengeButton, nullptr, "GetPaperSpriteSourceSize", nullptr, nullptr, sizeof(SBZMainMenuBaseChallengeButton_eventGetPaperSpriteSourceSize_Parms), Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics
	{
		struct SBZMainMenuBaseChallengeButton_eventInitializeChallengeData_Parms
		{
			FSBZChallengeData InChallengeData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::NewProp_InChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::NewProp_InChallengeData = { "InChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuBaseChallengeButton_eventInitializeChallengeData_Parms, InChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::NewProp_InChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::NewProp_InChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::NewProp_InChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuBaseChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuBaseChallengeButton, nullptr, "InitializeChallengeData", nullptr, nullptr, sizeof(SBZMainMenuBaseChallengeButton_eventInitializeChallengeData_Parms), Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::NewProp_InChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::NewProp_InChallengeData = { "InChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuBaseChallengeButton_eventOnChallengeDataInititalized_Parms, InChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::NewProp_InChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::NewProp_InChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::NewProp_InChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuBaseChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuBaseChallengeButton, nullptr, "OnChallengeDataInititalized", nullptr, nullptr, sizeof(SBZMainMenuBaseChallengeButton_eventOnChallengeDataInititalized_Parms), Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuBaseChallengeButton_NoRegister()
	{
		return USBZMainMenuBaseChallengeButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_GetPaperSpriteSourceSize, "GetPaperSpriteSourceSize" }, // 4266922855
		{ &Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_InitializeChallengeData, "InitializeChallengeData" }, // 15725395
		{ &Z_Construct_UFunction_USBZMainMenuBaseChallengeButton_OnChallengeDataInititalized, "OnChallengeDataInititalized" }, // 2208837059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuBaseChallengeButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuBaseChallengeButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::NewProp_ChallengeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuBaseChallengeButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuBaseChallengeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::NewProp_ChallengeData = { "ChallengeData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuBaseChallengeButton, ChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::NewProp_ChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::NewProp_ChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::NewProp_ChallengeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuBaseChallengeButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::ClassParams = {
		&USBZMainMenuBaseChallengeButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuBaseChallengeButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuBaseChallengeButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuBaseChallengeButton, 3565190295);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuBaseChallengeButton>()
	{
		return USBZMainMenuBaseChallengeButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuBaseChallengeButton(Z_Construct_UClass_USBZMainMenuBaseChallengeButton, &USBZMainMenuBaseChallengeButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuBaseChallengeButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuBaseChallengeButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
